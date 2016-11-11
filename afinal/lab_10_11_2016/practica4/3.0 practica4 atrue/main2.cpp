#include <iostream>
#include "puntoarray.h"

using std::cout;
using std::endl;

void printAttributes(Polygon *pol){
    if (pol -> getNumSides() == 4){
        cout << "El area del rectangulo es: " << pol -> getArea() << endl;
    }
    else if (pol -> getNumSides() == 3){
        cout << "El area del triangulo es: " << pol -> getArea() << endl;
    }

    cout << "Puntos\t(x, y)" << endl;
    for (int i = 0; i < pol->getNumSides(); i++){
        cout << "Punto" << i + 1 << ":\t" << "(" << pol->getPoints()->get(i)->
        getX() << ", " << pol->getPoints()->get(i)->getY() << ")" << endl;
    }
}

int main()
{
    Point arrPoints[3];              //arreglo de Points
    arrPoints[2] = {3,66};
    //arrPoints[3] = {Point(0,1), Point(1,2), Point(3,5)};
    //cout << arrPoints[2].getX() << endl;
    //cout << arrPoints[2].getY() << endl;


    PointArray pA1{arrPoints,3};    //objeto tipo PointArray       segundo parametro por el tama
    PointArray pA2{pA1};             //Copio pA1 a pA2
    //por el numero de parametros y el tipo identificamos el constructor  y


    Point nuevo1{14, 25};
    pA2.push_back(nuevo1);           //insertar al final del arreglo


    Point nuevo2{5, 6};     //declarando nuevo punto
    pA2.insert(1, nuevo2);
    cout << "imprime el punto que esta en la posicion 1" <<endl;
    pA2.showPoint(1);
    cout << "imprime el punto que esta en la posicion 4" <<endl;
    pA2.showPoint(4);                //imprime el punto que esta en la pos 4
    cout << pA2.getSize() << endl;     //devuelve el tama;o
    int cont=pA2.getSize();
    cout << cont <<endl;
    cout << "Los puntos son" <<endl;
    for(int i=0;i<=cont;i++)
        pA2.showPoint(i);{
        cout<<endl;
        cout<<endl;
    }


    pA2.remove(3);
    pA2.showPoint(3);                //Ahora Point pos. 4 pasa a pos. 3
    cout << pA2.getSize() << endl;

    Point *ptrP = pA2.get(3);   //devuelve un punt a punto  el punto de la posicion 3
    cout << "prueba" <<endl;
    cout << ptrP->getX() << endl;
    cout << ptrP->getY() << endl;

    //PointArray rectan[1];
    //rectan[0]={2};

    pA2.clear();
    cout << pA2.getSize() << endl;
    //return 0;

/*
    Rectangle r{{2, 3}, {5, 8}};
    //cout << r.getNumPolygons() << endl;
    cout << r.getArea() << endl;
    Triangle t{{2, 3}, {5, 8}, {7, 4}};
    cout << t.getArea() << endl;
    printAttributes(&r);
    cout << endl;
    printAttributes(&t);
*/
    cout << "Ingrese las coordenadas de los vertices de la parte inferior-izquierda y superior-derecha de un rectangulo, en forma de 4 enteros:" << endl;

    int r1x, r1y, r2x, r2y;

    cin >> r1x >> r1y >> r2x >> r2y;
    Rectangle r{{r1x, r1y}, {r2x, r2y}};
    printAttributes(&r);

    cout << "Ingrese las coordenas de los vertices de un triangulo, en forma de 6 enteros:" << endl;

    int t1x, t1y, t2x, t2y, t3x, t3y;

    cin >> t1x >> t1y >> t2x >> t2y >> t3x >> t3y;
    Triangle t{{t1x, t1y}, {t2x, t2y}, {t3x, t3y}};
    printAttributes(&t);

    return 0;




}

//una clase vector
//un vector array
