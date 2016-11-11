#include "pilas.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <queue>
#include <vector>
#include <cassert>

using namespace std;

/*Implementacion de la clase Pila*/
template <class T>
inline Pila<T>::Pila(int LongMax):Lmax(LongMax)
{
    elementos = new T[LongMax];
    assert(elementos != 0);
    tope = -1;
};

template <class T>
inline Pila<T>::Pila(const Pila<T> &p):Lmax(p.Lmax)
{
    tope = p.tope ;
    elementos = new T [Lmax];
    assert(elementos != 0);
    for(int i = 0; i <= tope; i++)
        elementos[i] = p.elementos[i];
};

template <class T>
inline bool Pila<T>::vacia() const
{
    return tope == -1 ;
}

template <class T>
inline T& Pila<T>::elemento()
{
    return elementos[tope];
}

template <class T>
inline void Pila<T>::poner(const T &elem)
{
    if (tope == Lmax -1)
    {
        cout << "Error : Pila llena" << endl;
        exit(-1);
    }
    tope++;
    elementos[tope] = elem;
}

template <class T>
inline void Pila<T>::quitar()
{
    if (!vacia())
        tope--;
}

template <class T>
inline Pila<T>::~Pila()
{
    delete [] elementos;
}




/*Implementacion de la clase Cola*/
template <class T>
inline Cola<T>::Cola(int LongMax):Lmax(LongMax+1) //Constructor primitivo
{
    elementos = new T [LongMax];
    assert(elementos!= 0);
    ant = 0;
    post = Lmax -1;
};

template <class T>
inline Cola<T>::Cola(const Cola<T> &c):Lmax(c.Lmax) //Constructor de Copia
{
    ant = c.ant;
    post = c.post;
    elementos = new T [Lmax];
    assert(elementos != 0);
    for (int i = ant; i != post; i = (i + 1) % Lmax)
       elementos[i] = c.elementos[i];
    elementos [post] = c.elementos[post];
};

template <class T>
inline bool Cola<T>::vacia() const //detecta si la cola esta vacía
{
    return ((post + 1) % Lmax) == ant;
}

template <class T>
inline bool Cola<T>::llena() const //detecta si la cola esta llena
{
    return ((post + 2) % Lmax) == ant;
}

template <class T>
inline T &Cola<T>::cabecera() //devuelve la cabecera de la cola
{
    return elementos[ant];
}

template <class T>
inline void Cola<T>::poner(const T &elem) //inserta un elemento al final
{
    assert(!llena());

    post = (post + 1) % Lmax;
    elementos[post] = elem;
}

template <class T>
inline void Cola<T>::quitar() //suprime el primer elemento
{
    assert(!vacia());

    ant = (ant + 1 ) % Lmax;
}

template <class T>
inline int Cola<T>::num_elementos() const //devuelve el numero de elementos
{
    if (vacia())
        return 0;
    if (post > ant)
        return post - ant + 1;
    else
        return (Lmax - ant + 1) + (post + 1);
}

template <class T>
inline Cola<T>::~Cola() //destructor
{
    delete [] elementos;
}

