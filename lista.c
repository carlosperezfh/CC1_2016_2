#include "lista.h"
#include <stdlib.h>
#include <string.h>

struct Nodo{
    Libro libro;
    struct Nodo* siguiente;
};

struct Lista{
    Nodo* cabeza;
};

Nodo* CrearNodo(Libro* libro) {
    Nodo* nodo=(Nodo *) malloc(sizeof(Nodo));
    strcpy(nodo->libro.titulo, libro->titulo,50);
    strcpy(nodo->libro.autor, libro->autor,50);
    strcpy(nodo->libro.isbn, libro->isbn,13);
    nodo->siguiente=NULL;
    return nodo;
}

void DestruirNodo(Nodo* nodo){
    free(nodo);
}

void InsertarPrincipio(Lista* lista, Libro* libro){
    Nodo* nodo = CrearNodo(libro);
    nodo->siguiente=lista->cabeza;
    lista->cabeza = nodo;
}

void InsertarFinal(Lista* lista, Libro* libro){
    Nodo* nodo = CrearNodo(libro);
    if (lista->cabeza==NULL){
        lista->cabeza=nodo;
    } else {
        Nodo* puntero = lista->cabeza;
        while (puntero->siguiente){
            puntero = puntero->siguiente;
        }
    puntero->siguiente = nodo;
    }
}

