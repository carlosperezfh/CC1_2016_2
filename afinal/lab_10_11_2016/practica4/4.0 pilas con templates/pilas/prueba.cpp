
/*template <class T>
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
class Pila
{
public:
    Pila();
    Pila(int LongMax = 100);
    Pila(const Pila<T> &p);
    bool vacia() const;
    T &elemento();
    void poner (const T &elem);
    void quitar();
    ~Pila();

 private:
    //Lista<T> &pila;
    //int tope,LoMax,elementos,Lmax;
    T *elementos;
    const int Lmax;
    int tope;
};
*/

/*implementacion de Lista*/
/*
template <class T>
Lista<T>::Lista()
{
    auto cab=new Lista;
    assert(cab != 0);
    auto fin=cab;
    num_elem=0;
}

template <class T>
bool Lista<T>::vacia() const
{
    return (num_elem == 0);
}

template <class T>
int Lista<T>::num_elementos() const
{
     return num_elem;
}
*/
/*Implementacion de la clase Pila*/

/*
template <class T>
inline Pila<T>::Pila(int LongMax):Lmax(LongMax)
{
    elementos = new T[LongMax];
    assert(elementos != 0);
    tope = -1;
};

template <class T>
Pila<T>::Pila(const Pila<T> &p):Lmax(p.Lmax)
{
    tope = p.tope ;
    elementos = new T [Lmax];
    assert(elementos != 0);
    for(int i = 0; i <= tope; i++)
        elementos[i] = p.elementos[i];
};

template <class T>
inline bool Pila<T>::vacia() const
{
    return tope == -1 ;
}

template <class T>
inline T& Pila<T>::elemento()
{
    return elementos[tope];
}

template <class T>
inline void Pila<T>::poner(const T &elem)
{
    if (tope == Lmax -1)
    {
        cout << "Error : Pila llena" << endl;
        exit(-1);
    }
    tope++;
    elementos[tope] = elem;
}

template <class T>
inline void Pila<T>::quitar()
{
    if (!vacia())
        tope--;
}

template <class T>
inline Pila<T>::~Pila()
{
    delete [] elementos;
}



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



*/
