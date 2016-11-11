#include "pilas.h"
#include <iostream>
#include <algorithm>
#include <iterator>
//#include <queue>
#include <cassert>
#include <vector>

using namespace std;


/*Implementacion de la clase Cola*/
//template <class T>
Cola::Cola(int LongMax):Lmax(LongMax+1) //Constructor primitivo
{
    elementos = new int[LongMax];
    assert(elementos!= 0);
    ant = 0;
    post = Lmax -1;
};

//template <class T>
Cola::Cola(const Cola &c):Lmax(c.Lmax) //Constructor de Copia
{
    ant = c.ant;
    post = c.post;
    elementos = new int[Lmax];
    assert(elementos != 0);
    for (int i = ant; i != post; i = (i + 1) % Lmax)
       elementos[i] = c.elementos[i];
    elementos [post] = c.elementos[post];
};

//template <class T>
bool Cola::vacia() const //detecta si la cola esta vacía
{
    return ((post + 1) % Lmax) == ant;
}

//template <class T>
bool Cola::llena() const //detecta si la cola esta llena
{
    return ((post + 2) % Lmax) == ant;
}

//template <class T>
Cola::cabecera() //devuelve la cabecera de la cola
{
    return elementos[ant];
}

//template <class T>
void Cola::poner(const &elem) //inserta un elemento al final
{
    assert(!llena());

    post = (post + 1) % Lmax;
    elementos[post] = elem;
}

//template <class T>
void Cola::quitar() //suprime el primer elemento
{
    assert(!vacia());
    ant = (ant + 1 ) % Lmax;
}

//template <class T>
int Cola::num_elementos() const //devuelve el numero de elementos
{
    if (vacia())
        return 0;
    if (post > ant)
        return post - ant + 1;
    else
        return (Lmax - ant + 1) + (post + 1);
}

//template <class T>
Cola::~Cola() //destructor
{
    delete [] elementos;
}

