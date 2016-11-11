#include <stdio.h>
#include<stdlib.h>


struct NodoLista {
int dato;
struct NodoLista* sig;
};

typedef struct NodoLista TNodoLista, *PNodoLista;

void insertaPrincipio (PNodoLista *p, int v){
//creamos un nodo nuevo
PNodoLista nuevo;
nuevo = (TNodoLista *) malloc (sizeof (TNodoLista));
nuevo->dato=v;
//Añadimos la lista a continuacion del nuevo nodo
nuevo->sig=*p;
//Ahora el comienzo de nuestra lista es nuevo nodo
*p=nuevo;
}

main()
{
    insertaPrincipio(PNodoLista *p,)

}
