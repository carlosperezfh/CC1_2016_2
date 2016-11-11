#ifndef lista_h
#define lista_h

#include <stdio.h>
#include "libro.h"

typedef struct Nodo {
    Libro libro;    //
    Nodo* siguiente;  //puntero a tipo nodo
} Nodo;

typedef struct Lista {
    Nodo* cabeza;   //puntero a la cabeza de la lista
    int longitud;  //cuantos elementos hay en lista
} Lista;


Nodo* CrearNodo(Libro* libro); // libro es un puntero que apunta a un tipo libro
void DestruirNodo(Nodo* nodo);
void InsertarPrincipio(Lista* lista, Libro* libro);
void InsertarFinal(Lista* lista, Libro* libro);
void InsertarDespues(int n, Lista* lista, Libro* libro);
Libro* Obtener(int n, Lista* lista);
int Contar(Lista* lista);
int EstaVacia(Lista* lista);
void EliminarPrincipio(Lista* lista);
void EliminarUltimo(Lista* lista);
void EliminarElemento(int n, Lista* lista);
#endif
