#include <iostream>
#include <ostream>
#include <algorithm>
#include <iterator>
//#include <queue>
#include <vector>
#include <cassert>

#include "pilas.h"
using namespace std;

int main()
{

    Cola prueba;
    prueba.poner(6);
    prueba.vacia();
    if (prueba.vacia()==1)
        cout << "La lista esta vacia" << endl;
    else
        cout << "La lista esta llena" << endl;

    prueba.poner(5);
    prueba.poner(7);
    prueba.poner(3);

    cout << "El numero de elementos es  " << prueba.num_elementos() << endl;
    cout << "La cabecera de la cola es " << prueba.cabecera() << endl;

    prueba.quitar();
    cout << "El numero de elementos es  " << prueba.num_elementos() << endl;
    cout << "La cabecera de la cola es " << prueba.cabecera() << endl;
    for(int i=0;i<Lmax;++i)
        prueba.num_elementos(i);
    return 0;
}


//clases
//oo
//templates
//stl
