#include <iostream>
//#include <conio.h>

using namespace std;

/* tipo de dato que contendr� la lista */
typedef char DATA_TYPE;

// declaraci�n de estructura nodo
struct nodo {
	DATA_TYPE data;
	nodo *next;
};

class StackDin {

    // atributos
    int ITEMS;    /* n�mero de elementos en la lista */
    int ITEMSIZE; /* tama�o de cada elemento */
    nodo *SP;     /* puntero de lectura/escritura */

public:
    // constructor
    StackDin() : SP(NULL), ITEMS(0), ITEMSIZE(sizeof(DATA_TYPE)) {}

    // destructor
    ~StackDin() {}

    /* agregar componente a la lista */
    DATA_TYPE put(DATA_TYPE valor)
    {
	nodo *temp;

	temp = new nodo;
	if (temp == NULL) return -1;

	temp->data = valor;
	temp->next = SP;
	SP = temp;
	ITEMS ++;
	return valor;
    }

    int empty() { return ITEMS == 0; }


    /* retirar elemento de la lista */
    DATA_TYPE get()
    {
	nodo *temp;
	DATA_TYPE d;

	if ( empty() ) return -1;

	d = SP->data;
	temp = SP->next;
	if (SP) delete SP;
	SP = temp;
	ITEMS --;
	return d;
    }

}; // fin de la clase StackDin


/* punto de prueba para la clase StackDin */
int main()
{
    //clrscr();

    StackDin s;
    DATA_TYPE d;

    for (d='A'; d<='Z'; d++) s.put(d);

    while ( ! s.empty() )
	cout << (DATA_TYPE)s.get() << " ";

    cout << "\nPara terminar presione <Enter>...";
    cin.get();
    return 0;
}
