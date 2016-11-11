//Clase Point

class Vector
{
public:
    Vector(double x0 = 0,double x1 = 0,double y0 = 0,double y1 = 0);
    //Point(Point &o);
    double getX0() const;
    double getY0() const;
    double getX1() const;
    double getY1() const;
    void setInicio(const double &new_x0,const double &new_y0);
    void setFin(const double &new_x1,const double &new_y1);
protected:
    double x0_,x1_,y0_,y1_;
};

//Clase PointArray

class PointArray
{
public:
    PointArray();
    PointArray(const Vector points[], const int &_size);
    PointArray(const PointArray &pv);  //iguala dos arreglos
    ~PointArray();
    void showPoint(const int &pos);
    void push_back(const Vector &p);
    void insert(const int &position, const Vector &p);
    void remove(const int &pos);
    const int getSize() const;
    void clear();
    Vector* get(const int &position);                //Permite modificar al PointArray, ya que nos devuelve un puntero a Point.
    const Vector* get(const int &position) const;    //Solo para leer la informacion del Point, pero no para cambiarla.
private:
    void resize(const int &newLength);
    void printVector(double x0, double x1, double y0, double y1);

    Vector* firstPoint;
    int length;
};
