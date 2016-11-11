#ifndef PILAS_H_INCLUDED
#define PILAS_H_INCLUDED

template <class T>
class Pila
{
public:

    inline Pila(int LongMax = 100);
    inline Pila(const Pila<T> &p);
    inline bool vacia() const;
    inline T &elemento();
    inline void poner (const T &elem);
    inline void quitar();
    inline ~Pila();

 private:
    //Lista<T> &pila;
    //int tope,LoMax,elementos,Lmax;
    T *elementos;
    const int Lmax;
    int tope;
};

template <class T>
class Cola{
public:
    inline Cola(int LongMax = 100); /* Constructor primitivo.@param LongMax: Tamaño máximo de la cola.@doc Crea una cola vacía con una capacidad máxima de 100. Importante: ¡¡Cambio con respecto a la especificación general!! */
    inline Cola(const Cola<T> &c);/* Constructor de copia.@param c: Cola que se copia.@docCrea una cola que es copia de c. */
    inline bool vacia() const; /*Informa si la cola está vacía. @return true, si la cola está vacía.false, en otro caso. */
    inline T &cabecera(); /*Acceso al elemento al principio de la cola.@return Referencia al elemento en la cabecera de la cola. */
    inline void poner(const T &elem); /*Añade un elemento en la cola.@param elem: Elemento que se inserta.@docInserta un nuevo elemento al final de la cola. */
    inline void quitar();  /*Quita un elemento de la cola.@precondition El receptor no puede estar vacío.@docElimina el elemento en la cabecera de la cola. */
    inline int num_elementos() const;  /*Obtiene el número de elementos en la cola.@return número de elementos incluidos en la cola. */
    inline ~Cola();    /*Destructor.@postcondition El receptor es MODIFICADO.@docEl receptor es destruido liberando todos los recursos que usaba. */
private:
    T *elementos;
    const int Lmax;
    int ant;
    int post;
    bool llena() const; /*Informa si la cola está llena.@return true, si la cola está llena.false, en otro caso. */
    //int prueba;
};
#endif // PILAS_H_INCLUDED
