#include <iostream>
#include "point.h"
#include <stdlib.h>
#include <string.h>
using namespace std;

/*class Point
{
private:
	int x, y;
public:
	Point(int x1 = 0, int y1 = 0) : x(x1), y(y1) {}
*/
//Point::Point(int x1 = 0, int y1 = 0):x(x1), y(y1){}

int Point::getX() const   //Get the x coordinate
{
    return x;
}

int Point::getY() const   //Get the y coordinate
{
	return y;
}
void Point::setX(const int new_x)  //set the x coordinate
{
	x = new_x;
}
void Point::setY(const int new_y)  //set the y coordinate
{
	y = new_y;
}
int Point::printpoint()
{
    //Point imprimir(newx,newy);
    cout << getX() << endl;
    cout << getY() << endl;
}
int Point::modificar()
{
    Point modify;
    modify.setX(4);
    modify.setY(55);
	cout << modify.getX() << endl;
	cout << modify.getY() << endl;

}

