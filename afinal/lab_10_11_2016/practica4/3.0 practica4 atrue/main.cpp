#include <iostream>
#include "puntoarray.h"

using std::cout;
using std::cin;
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
    /*cout << "Ingrese las coordenadas del rectangulo" << endl;

    int r1x, r1y, r2x, r2y;

    cin >> r1x >> r1y >> r2x >> r2y;
    Rectangle r{{r1x, r1y}, {r2x, r2y}};
    printAttributes(&r);

    cout << "Ingrese las coordenas triangulo:" << endl;

    int t1x, t1y, t2x, t2y, t3x, t3y;

    cin >> t1x >> t1y >> t2x >> t2y >> t3x >> t3y;
    Triangle t{{t1x, t1y}, {t2x, t2y}, {t3x, t3y}};
    printAttributes(&t);*/

    /*3 Assume you implemented Problem 5 from Problem Set 3 correctly. This would mean you
would have a working Polygon class, and inheriting from that a Triangle class and a
Rectangle class. Now imagine you have a pointer declared as Rectangle *rect; that has
been properly initialized */

    Rectangle *rect;

    /*3.1   Write a line of code showing how you would cast rect to a Triangle* without checking
for type correctness (i.e., without checking whether it actually points to a Triangle). Do
not use C-style casts*/
    //static_cast < Triangle *>(rect)    //no funciona
    static_cast < Rectangle*>(rect);    //si  funciona

    reinterpret_cast < Triangle*>(rect);

    /*3.2   Now write a line of code that does the same thing, but checks for type correctness and throws
an exception or returns a null pointer if rect does not actually point to a Triangle*/

    dynamic_cast <Triangle *>(rect);   //solo permite el cast cuando hay herencia y jerarquia por que ambos usan getarea virtual

    return 0;




}

//una clase vector
//un vector array

