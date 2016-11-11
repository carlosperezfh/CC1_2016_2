#include <iostream>
#include "puntoarrayvector.h"

using std::cout;
using std::endl;

int main()
{
    Vector arrVectores[3];              //arreglo de Points
    arrVectores[2] = {3,6,4,8};
    /*cout << arrVectores[2].getX0() << endl;
    cout << arrVectores[2].getY0() << endl;*/


    PointArray pA1{arrVectores,3};    //objeto tipo PointArray       segundo parametro por el tama
    PointArray pA2{pA1};             //Copio pA1 a pA2
    //por el numero de parametros y el tipo identificamos el constructor  y


    Vector nuevo1{14, 25};
    pA2.push_back(nuevo1);           //insertar al final del arreglo

    Vector nuevo2{5, 6};     //declarando nuevo punto
    pA2.insert(1, nuevo2);
    pA2.showPoint(1);
    pA2.showPoint(4);                //imprime el punto que esta en la pos 4
    cout << pA2.getSize() << endl;     //devuelve el tama;o

    pA2.remove(3);
    pA2.showPoint(3);                //Ahora Point pos. 4 pasa a pos. 3
    cout << pA2.getSize() << endl;

    /*Vector *ptrP = pA2.get(3);   //devuelve un punt a punto  el punto de la posicion 3
    cout << ptrP->getX() << endl;
    cout << ptrP->getY() << endl;*/


    pA2.clear();
    cout << pA2.getSize() << endl;
    return 0;
}

//una clase vector
//un vector array

//listas stl  pilas colas
