#include <iostream>
#include <string>
#include <math.h>
#define MAX_SIZE 256 /* capacidad m�xima */

using namespace std;

typedef char almacen[MAX_SIZE];

class Queue {

int cabeza; /* puntero de lectura */
int cola; /* puntero de escritura */
int ITEMS; /* n�mero de elementos en la lista */
int ITEMSIZE; /* tama�o de cada elemento */
almacen alma; /* el almacen */

public:
    // constructor
    Queue() {
	cabeza = 0;
	cola = 0;
	ITEMS = 0;
	ITEMSIZE = 1;
    }

    // destructor
    ~Queue() {}

// regresa 1 (true) si la lista est� vacia
int empty() { return ITEMS == 0; }

// pop insertar elemento a la lista
int put(int d)
{
    if ( ITEMS == MAX_SIZE) return -1;
    if ( cola >= MAX_SIZE) { cola = 0; }
    alma[cola] = d;
    cola ++;
    ITEMS ++;
    return d;
}

// retirar elemento de la lista
int get()
{
    char d;
    if ( empty() ) return -1;
    if ( cabeza >= MAX_SIZE ) { cabeza = 0; }
    d = alma[cabeza];
    cabeza ++;
    ITEMS --;
    return d;
}

// regresa el n�mero de elementos en lista
int size() { return ITEMS; }

//void push() {resize}

}; // fin de la clase Queue


// probando la cola
int main()
{

    int d;
    Queue q;
    //push

    //consultar si la cola esta vacia

    q.empty();

    /*for (d='A'; d<='Z'; d++) q.put(d);
        cout << "Items = " << q.size() << endl;*/

    //probando pop
    q.put('z');
    for (d='A'; d<='Z'; d++) q.put(d);
        cout << "cola con pop " << q.size() << endl;

    while ( q.size() ) {
        cout << (char)q.get() << " ";
    }



    cout << "\nPara terminar oprima <Enter> ...";
    cin .get();
    return 0;
}

