//estructura para poder guardar unos datos
#ifndef libro_h
#define libro_h
#include <stdio.h>
#include <string.h>

struct Libro{
    char titulo[50];
    char autor[50];
    char isbn[13];
    int contador;
} Libro;


#endif
