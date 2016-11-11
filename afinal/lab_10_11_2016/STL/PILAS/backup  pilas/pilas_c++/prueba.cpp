
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


*/
