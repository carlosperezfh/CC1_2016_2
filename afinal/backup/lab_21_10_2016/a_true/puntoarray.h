//Clase Point

class Point
{
public:
    Point(int x1 = 0, int y1 = 0);
    int getX() const;
    int getY() const;
    void setX(const int &new_x);
    void setY(const int &new_y);
protected:
    int x, y;
};

//Clase PointArray

class PointArray
{
public:
    PointArray();       //contructor
    PointArray(const Point points[], const int &_size);  //c2
    PointArray(const PointArray &pv);       //c3    igualamos dos pointarray
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
