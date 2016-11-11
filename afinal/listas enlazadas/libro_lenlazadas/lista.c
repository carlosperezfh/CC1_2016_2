#include "lista.h"
#include <stdlib.h>
#include <string.h>

Nodo* CrearNodo(Libro* libro) {
    Nodo* nodo=(Nodo *) malloc(sizeof(Nodo));
    strncpy(nodo->libro.titulo, libro->titulo,50);
    strncpy(nodo->libro.autor, libro->autor,50);
    strncpy(nodo->libro.isbn, libro->isbn,13);
    nodo->siguiente=NULL;
    return nodo;
}

void DestruirNodo(Nodo* nodo){
    free(nodo);
}

void InsertarPrincipio(Lista* lista, Libro* libro){
    Nodo* nodo = CrearNodo(libro);
    nodo->siguiente=lista->cabeza;  //pone como cola la actual cabeza de lista
    lista->cabeza = nodo;  //ahora la cabeza  apunta al nodo
    lista->longitud++;
}

void InsertarFinal(Lista* lista, Libro* libro){
    Nodo* nodo = CrearNodo(libro);
    if (lista->cabeza==NULL){ //si la cabeza de lista esta vacia
        lista->cabeza=nodo;     //si cl esta vacia la posicionamos como la cl
    } else {
        Nodo* puntero = lista->cabeza;  //el puntero tipo nodo sera la cabeza de lista
        while (puntero->siguiente){ // recorrido de lista, el puntero avanzara mientras el puntero tenga siguiente hasta que sea nulo
            puntero = puntero->siguiente; //cuando puntero ya no tenga siguiente saldra de la lista
        }
        puntero->siguiente = nodo;   //puntero apunta al ultimo elemento ahora hacemos que apunte al nodo recien creado
    }
    lista->longitud++;
}

void InsertarDespues(int n, Lista* lista, Libro* libro){
    Nodo* nodo = CrearNodo(libro);
    if (lista ->cabeza == NULL) {
        lista ->cabeza = nodo;
    } else {
        Nodo* puntero = lista ->cabeza; //
        int posicion = 0;
        while (posicion<n && puntero ->siguiente){
            puntero = puntero ->siguiente;
            posicion++;
        }
        nodo->siguiente = puntero->siguiente; // CONECTAMOS X DERECHA
        puntero->siguiente = nodo;  //CONECTAMOS X IZQUIERDA
    }
    lista->longitud++;
}

Libro* Obtener(int n, Lista* lista) {//nos devuelve el libro en la posicion n
    if (lista->cabeza == NULL) {
        return NULL;
    } else {
        Nodo* puntero = lista ->cabeza;
        int posicion = 0;
        while (posicion < n && puntero->siguiente){
            puntero = puntero->siguiente;
            posicion++;
        }
        if (posicion !=n){
            return NULL;
        } else {
            return &puntero->libro;
        }
    }
}

int Contar(Lista* lista) {
    return lista->longitud;
}

/*int EstaVacia(Lista* lista){
    return lista->cabeza = NULL;
}*/

void EliminarPrincipio(Lista* lista) {      //Eliminar el primer elemento de la lista
    if (lista->cabeza) {    //si mi lista tiene cabeza
        Nodo* eliminado = lista->cabeza;
        lista->cabeza = lista->cabeza->siguiente;  //ahora el segundo sera la cabeza
        DestruirNodo(eliminado);
        lista->longitud--;
    }
}

void EliminarUltimo(Lista* lista) {
    if (lista->cabeza) {
        if (lista->cabeza->siguiente) { //si la cabeza tiene solo un elemento
            Nodo* puntero = lista->cabeza;
            while (puntero->siguiente->siguiente) {
                puntero = puntero->siguiente;
            }
            Nodo* eliminado = puntero->siguiente;
            puntero->siguiente=NULL;
            DestruirNodo(eliminado);
            lista->longitud--;
        } else {
            Nodo* eliminado = lista->cabeza;
            lista->cabeza = NULL;
            DestruirNodo(eliminado);
            lista->longitud--;
        }
    }
}

void EliminarElemento(int n, Lista* lista) {
    if (lista->cabeza) {    //si lista tiene cabeza bien si no, no hay nada que eliminar
        if (n == 0) {   //si quiero eliminar el primer elemento copiamos la func eliminar primer elemento
            Nodo* eliminado = lista->cabeza;
            lista->cabeza = lista->cabeza->siguiente;
            DestruirNodo(eliminado);
            lista->longitud--;
        } else if (n < lista->longitud) {   //n no puede ser mayor a los elementos de la lista
            Nodo* puntero = lista->cabeza;
            int posicion = 0;
            while (posicion < (n-1)) {
                puntero = puntero->siguiente;
                posicion++;
            }
            Nodo* eliminado = puntero->siguiente;
            puntero->siguiente = eliminado->siguiente;  //conectar el siguiente del anterior con el siguiente que voy a eliminar
            DestruirNodo(eliminado);
            lista->longitud--;
        }
    }
}

int main()
{
    struct Libro prueba;
    prueba.titulo='hgg';
    struct Nodo *nodo2;
    prueba=malloc(sizeof(struct Libro));
    nodo2 = CrearNodo(prueba);


    while (nodo2 != NULL)
    {
        printf("%s\n", nodo2->libro.titulo);
        nodo2 = nodo2 -> siguiente;
    }
    printf("\n\n");


    printf("Hello world!\n");
    return 0;
}

