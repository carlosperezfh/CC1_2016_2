#include "pilas.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <queue>
#include <vector>

using namespace std;

//implementacion de Lista
template <typename T>
 Lista<T>::Lista()
{
    auto cab=new Lista;
    assert(cab != 0);
    auto fin=cab;
    num_elem=0;
}

template <class T>
bool Lista<T>::vacia() const
{
    return (num_elem == 0);
}

template <class T>
int Lista<T>::num_elementos() const
{
     return num_elem;
}



template <class T>
inline Pila<T>::Pila(int LongMax):Lmax(LongMax)
{
    elementos = new T[LongMax];
    assert(elementos != 0);
    tope = -1;
};

template <class T>
Pila<T>::Pila(const Pila<T> &p)
        :LMax(p.LMax)
{
    tope = p.tope ;
    elementos = new T [LoMax];
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
