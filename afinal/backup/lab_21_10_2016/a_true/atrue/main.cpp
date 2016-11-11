
#include <iostream>
#include "puntoarray.h"
//using namespace std;
using std::cout;
using std::endl;

int main()
{
    Point arrPoints[4];              //arreglo de Points
    //arrPoints[0] = {8, 2};
    arrPoints[0]=Point(4,4);


    cout << arrPoints[0].getX() <<" "<<arrPoints[0].getY()<< endl;


    PointArray pA1{arrPoints, 3};    //objeto tipo PointArray
    PointArray pA2{pA1};             //Copio pA1 a pA2

    Point nuevo1{14, 25};
    pA2.push_back(nuevo1);           //insertar al final del arreglo

    Point nuevo2{5, 6};
    pA2.insert(1, nuevo2);
    pA2.showPoint(1);
    pA2.showPoint(4);                //Point nuevo1 en pos. 4
    cout << pA2.getSize() << endl;

    pA2.remove(3);
    pA2.showPoint(3);                //Ahora Point pos. 4 pasa a pos. 3
    cout << pA2.getSize() << endl;

    Point *ptrP = pA2.get(3);
    cout << ptrP->getX() << endl;
    cout << ptrP->getY() << endl;

    pA2.clear();
    cout << pA2.getSize() << endl;


    return 0;
}
