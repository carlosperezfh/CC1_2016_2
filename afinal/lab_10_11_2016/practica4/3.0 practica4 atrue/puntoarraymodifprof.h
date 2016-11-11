//Clase Point

class Point
{
public:
    Pointarray();
    PointArray(const Point points[], const int &_size);
    PointArray(const PointArray &pv);
    ~PointArray();

    Point(int x1 = 0, int y1 = 0);
    Point(Point &o);
    int getX() const;
    int getY() const;
    void setX(const int &new_x);
    void setY(const int &new_y);
protected:
    int x, y;
private:
    void resize(int);
    Point *points;
    int _size;

};

//Clase PointArray

class PointArray
{
public:
    PointArray();
    PointArray(const Point points[], const int &_size);
    PointArray(const PointArray &pv);
    ~PointArray();
    void showPoint(const int &pos);
    void push_back(const Point &p);
    void insert(const int &position, const Point &p);
    void remove(const int &pos);
    const int getSize() const;
    void clear();
    Point* get(const int &position);                //Permite modificar al PointArray, ya que nos devuelve un puntero a Point.
    const Point* get(const int &position) const;    //Solo para leer la informacion del Point, pero no para cambiarla.
private:
    void resize(const int &newLength);

    Point* firstPoint;
    int length;
};

PointArray
