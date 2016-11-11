#include <iostream>
#include "puntoarray.h"

using std::cout;
using std::endl;

int main()
{
    Point arrPoints[3];              //arreglo de Points
    arrPoints[2] = {3,66};
    //cout << arrPoints[2].getX() << endl;
    //cout << arrPoints[2].getY() << endl;


    PointArray pA1{arrPoints, 3};    //objeto tipo PointArray       segundo parametro por el tama
    PointArray pA2{pA1};             //Copio pA1 a pA2
    //por el numero de parametros y el tipo identificamos el constructor  y


    Point nuevo1{14, 25};
    pA2.push_back(nuevo1);           //insertar al final del arreglo

    Point nuevo2{5, 6};     //declarando nuevo punto
    pA2.insert(1, nuevo2);
    pA2.showPoint(1);
    pA2.showPoint(4);                //imprime el punto que esta en la pos 4
    cout << pA2.getSize() << endl;     //devuelve el tama;o

    pA2.remove(3);
    pA2.showPoint(3);                //Ahora Point pos. 4 pasa a pos. 3
    cout << pA2.getSize() << endl;

    Point *ptrP = pA2.get(3);   //devuelve un punt a punto  el punto de la posicion 3
    cout << ptrP->getX() << endl;
    cout << ptrP->getY() << endl;

    pA2.clear();
    cout << pA2.getSize() << endl;
    return 0;
}
