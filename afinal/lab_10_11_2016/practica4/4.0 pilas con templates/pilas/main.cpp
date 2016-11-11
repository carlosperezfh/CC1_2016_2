#include <iostream>
#include <cassert>
#include <algorithm>
#include <iterator>
#include <queue>
#include <vector>

#include "pilas.cpp"
using namespace std;

int main()
{
    //Cola prueba;
//    Cola <int> prueba;
  //  prueba.poner(5);
    //cout << "El num ele es  " << prueba.num_elementos() << endl;
    //prueba.llena();
    //Pila.poner(numero);
    //Pila.elementos(3);
    //elementos[1]={3};
    //Pila<T>::<int> Pila(int) [with T=int];
    //Pila.poner(2);
    //vacio();
    //cout << "Hello world!" << endl;

    Pila <int> prueba2;
    prueba2.push(13);
    prueba2.push(15);
    prueba2.push(3);
    prueba2.pop();
    cout << prueba2.top() << endl;
    prueba2.print();

    /*4.2*/

	Pila<int> a;
	Pila<int> b;
	a.push(1);
	a.push(2);
	b.push(3);
	b.push(4);
	Pila <int> c = a+b;
	//c(a+b);
	//c.print();


    return 0;
}


//clases
//oo
//templates
//stl
