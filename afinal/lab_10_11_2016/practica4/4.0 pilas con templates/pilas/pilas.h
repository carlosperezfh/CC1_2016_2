#ifndef PILAS_H_INCLUDED
#define PILAS_H_INCLUDED


#include <iostream>
#include <algorithm>
#include <iterator>
#include <queue>
#include <vector>
#include <cassert>

using namespace std;

template <class T>
class Pila
{
public:
    Pila();
    Pila(const Pila<T> &p);
    vector<T> operator+(const Pila<T> &s2);
    bool empty() const;  //
    //T &elemento();
    T &top();
    void push (const T &elem);
    void pop();
    void print();
    ~Pila();

 private:
    //Lista<T> &pila;
    //int tope,LoMax,elementos,Lmax;
    vector<T> elementos;
    int tope;
};

#endif // PILAS_H_INCLUDED
