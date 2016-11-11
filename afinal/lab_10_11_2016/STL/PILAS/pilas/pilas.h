#ifndef PILAS_H_INCLUDED
#define PILAS_H_INCLUDED

template <class T>

class Lista
{
typedef int Posicion;

public:
    Lista();   //constructor
    bool vacia() const;  // vacía la lista
    int num_elementos() const;
    T &elemento(Posicion p);
    void insertar(Posicion p, const T& elemento);
    void borrar(Posicion p);
    Posicion primero() const;
    Posicion final() const;
    Posicion siguiente(Posicion p) const;
    Posicion anterior(Posicion p) const;
    void hacer_nula();
    ~Lista();

private:
    static const int LMAX = 100;
    T elem[LMAX];
    int num_elem;
};

template <class T>
class Cola{
public:
    Cola();    /**Constructor primitivo.@docCrea una cola vacía. */
    Cola(const Cola<T> & c);/**Constructor de copia.@param c: Cola que se copia.@docCrea una cola que es copia de c. */
    bool vacia() const; /**Informa si la cola está vacía. @return true, si la cola está vacía.false, en otro caso. */
    T& cabecera (); /**Acceso al elemento al principio de la cola.@return Referencia al elemento en la cabecera de la cola. */
    void poner_en_cola(const T & elem);/**Añade un elemento en la cola.@param elem: Elemento que se inserta.@docInserta un nuevo elemento al final de la cola. */
    void quitar_de_cola();  /**Quita un elemento de la cola.@precondition El receptor no puede estar vacío.@docElimina el elemento en la cabecera de la cola. */
    int num_elementos() const;  /**Obtiene el número de elementos en la cola.@return número de elementos incluidos en la cola. */
    ~Cola();    /**Destructor.@postcondition El receptor es MODIFICADO.@docEl receptor es destruido liberando todos los recursos que usaba. */
private:
    Lista<T> cola;
};

template <class T>
class Pila
{
public:
    Pila();
    Pila(int);
    Pila(const Pila<T> &p);
    bool vacia() const;
    T &elemento();
    void poner (const T& elem);
    void quitar();
    ~Pila();

 private:
    Lista<T> &pila;
    int tope,LoMax,elementos,Lmax;
};





#endif // PILAS_H_INCLUDED
