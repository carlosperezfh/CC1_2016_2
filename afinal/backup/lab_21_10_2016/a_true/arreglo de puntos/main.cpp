/*Puesto que vamos a permitir que las modificaciones a nuestro array, podrás encontramos que la matriz interna crece
y se contrae con bastante frecuencia. Una forma sencilla (aunque muy deficiente) para hacer frente a esto sin
repetitivamente escribir código similar es escribir una función miembro PointArray :: resize(int
n) que asigna un nuevo array de tamaño n, copia el primer elemento   min(previious array size, n) existente
elementos en él, y desasigna el antiguo array. Si al hacerlo se ha aumentado el tamaño,  it’s fine for resize to
leave the new spaces uninitialized.  whatever member function calls it will be
responsible for calling those spaces in. Then every time the array size changes at all (including
clear), you can call this function.
In some cases, after you call this function, you will have to subsequently shift some of
the contents of the array right or left con el fin de hacer sitio for a new value or deshacersenos de un valor
antiguo.
.., and only reallocate when you reach your
current limit or when how much is called debajo de su limite.
Add the PointArray::resize(int n) function como se especifica en el PointArray
class. Give it an appropriate access modi?er, keeping in mind that this is meant for use only
by internal functions; the public interface is speci?ed below..*/

#include <iostream>
#include "geometry.h"

using std::cout;
using std::endl;

int main()
{
    Point arrPoints[3];              //arreglo de Points
    arrPoints[2] = {4, 2};

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

/*
Ejer- 4.5.1:
Se necesita una version const para que al llamar a la funcion desde un const ArrayPoint,
se puedan devolver punteros a const Point, de esta manera si se acceden a los valores de los
puntos, no van a poder modificarse, solo leerse; pero ademas se necesita uno sin const para que se retorne
un puntero a Point, donde los atributos del objeto Point si pueden ser cambiados y tambien leidos.
*/

    return 0;
}
