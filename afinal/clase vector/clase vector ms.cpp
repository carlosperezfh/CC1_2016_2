#include <iostream>
#include <cmath>
#include "puntoarray.h"

using std::cout;
using std::endl;

//Clase Point

Vector::Vector(Point p1,  Point p2) : x0_{p1.}, x1_{x1}, y0_{y0}, y1_{y1} {}

double Vector::getX() const{
    return x0_,x1_;
    //return x0_;
}
double Vector::getY() const{
    return y0_,y1_;
    //return y0_;
}
void Vector::setX(const double &new_x0, const double &new_x1){
    x0_ = new_x0;
    x1_ = new_x1;
}
void Vector::setY(const double &new_y0,const double &new_y1){
    y0_ = new_y0;
    y1_ = new_y1;
}

//Clase PointArray

PointArray::PointArray(){
    length = 0;
    firstPoint = new Vector[0]; //para un punto
}

PointArray::PointArray(const Vector points[], const int &_size){
    length = _size;
    firstPoint = new Vector[_size];
    for (int i = 0; i < _size; i++){
        firstPoint[i] = points[i];
    }
}

PointArray::PointArray(const PointArray &pv){
    length = pv.length;
    firstPoint = new Vector[length];   //separa mem para el ancho de pv
    for (int i = 0; i < length; i++){
        firstPoint[i] = pv.firstPoint[i];  //el iesimo de pv
    }
}

PointArray::~PointArray(){
    delete[] firstPoint;  //con corchetes porque es un arreglo
}

void PointArray::resize(const int &newLength){  //por parametro resize
    if (newLength >= 0 ){
        Vector *aux = new Vector[newLength];  //para 3 newLength
        int actualLength = (newLength < length ? newLength : length);   //si el nuevo ancho es menor que el anterior tomamos en menor
        for (int i = 0; i < actualLength; i++){
            aux[i] = firstPoint[i];
        }
        delete[] firstPoint;
        firstPoint = aux;
        length = newLength;
    }
    else{
        cout << "Ingrese un tamaño valido" << endl;
    }
}

void PointArray::push_back(const Vector &p){ //aumenta en 1 el arreglo
    resize(length + 1);                          //Dentro de resize length aumenta en 1
    firstPoint[length - 1] = p; //asignamos lo que recibimos como parametro al ultimo
}


void PointArray::insert(const int &position, const Vector &p){
    resize(length + 1);
    for (int i = length - 1; i > position; i--){  //Desplazamiento en 1 a la derecha de todos los elementos
        firstPoint[i] = firstPoint[i - 1];        //que estan despues de position
    }
    firstPoint[position] = p;
}

void PointArray::remove(const int &pos){
    if (pos >= 0 && pos < length){
        for (int i = pos; i < length - 1; i++){
            firstPoint[i] = firstPoint[i + 1];
        }
        resize(length - 1);
    }
    else{
        cout << "Ingrese una posicion valida" << endl;
    }
}

const int PointArray::getSize() const{  //devuelve la cantidad de puntos
    return length;
}

void PointArray::clear(){
    resize(0);
}

Vector* PointArray::get(const int &position){    //retorna un puntero a punto(x,y)
    if (position >= 0 && position < length){
        return firstPoint + position;
    }
    else{
        return NULL;
    }
}

const Vector* PointArray::get(const int &position) const{    //no se puede recorrer
    if (position >= 0 && position < length){
        return firstPoint + position;
    }
    else{
        return NULL;
    }
}

void PointArray::showPoint(const int &pos){
    cout << "x: " << firstPoint[pos].getX() << endl;
    cout << "y: " << firstPoint[pos].getY() << endl;
}

