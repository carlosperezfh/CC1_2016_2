//#include "point.cpp"
#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
class Point
{
private:
	int x, y;
public:
    //int x, y;
	Point(int x1 = 0, int y1 = 0) : x(x1), y(y1) {}

	int getX() const;   //Get the x coordinate

	int getY() const;   //Get the y coordinate

	void setX(const int new_x);  //set the x coordinate
	void setY(const int new_y);  //set the y coordinate
	int printpoint();
	int modificar();

};
class PointArray
{
    int size;
    Point *points;

    void resize(int size);

public:
    PointArray();
    PointArray(const Point pts[],const int size);
};




#endif // POINT_H_INCLUDED
