#ifndef PILAS_H_INCLUDED
#define PILAS_H_INCLUDED

//template <class T>
class Cola{
public:
    Cola(int LongMax = 100); /* Constructor primitivo.@param LongMax: Tamaño máximo de la cola.@doc Crea una cola vacía con una capacidad máxima de 100. */
    Cola(const Cola &c);/* Constructor de copia.@param c: Cola que se copia.@docCrea una cola que es copia de c. */
    bool vacia() const; /*Informa si la cola está vacía. @return true, si la cola está vacía.false, en otro caso. */
    cabecera(); /*Acceso al elemento al principio de la cola.@return Referencia al elemento en la cabecera de la cola. */
    void poner(const &elem); /*Añade un elemento en la cola.@param elem: Elemento que se inserta.@docInserta un nuevo elemento al final de la cola. */
    void quitar();  /*Quita un elemento de la cola.El receptor no puede estar vacío.Elimina el elemento en la cabecera de la cola. */
    int num_elementos() const;  /*Obtiene el número de elementos en la cola.@return número de elementos incluidos en la cola. */
    ~Cola();    /*Destructor.@postcondition El receptor es MODIFICADO.@docEl receptor es destruido liberando todos los recursos que usaba. */
private:
    *elementos;
    const int Lmax;
    int ant;
    int post;
    bool llena() const; /*Informa si la cola está llena.@return true, si la cola está llena.false, en otro caso. */
    //int prueba;
};
#endif // PILAS_H_INCLUDED
