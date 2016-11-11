#include <stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node *next;
    struct node *cabeza;

};

/*struct lista
{
    struct node *cabeza;
};*/

void crearlista(struct node *head,int n);
void eliminar(struct node *head, struct node *next, int n);
void inserini(struct node *head, struct node *next, int n);
void imprimir(struct node *head, struct node *next, int n);
void cat_two_list(struct node *head,struct node *next,int n);

main()
{
    int i,n;
    struct node *head;
    struct node *next;
    head=malloc(sizeof(struct node));
    next=malloc(sizeof(struct node));
//crear lista
    crearlista(head,6);
    imprimir(head,next,6);

//eliminar
    eliminar(head,next,2);
    imprimir(head,next,6);
//insertar al inicio
	crearlista(head,6);
    inserini(head,next,1);
    imprimir(head,next,6);
//concatenar
    //cat_two_list(head,next,int n);
}

void crearlista(struct node *head,int n){
    int i;
    struct node *prev,*cur,*next;
    prev=malloc(sizeof(struct node));

    head -> val = 1;
    prev = head;

    for (i = 2; i <= n; ++i)
    {
        cur=malloc(sizeof(struct node));
        next = malloc(sizeof(struct node));
        cur -> val = i;       //i para darle al cur
        prev -> next = cur;
        //printf("prueba%d\n",next);
        //cur=cur->next;
         prev = cur;
    }
    prev -> next = NULL;
}
void eliminar(struct node *head, struct node *next, int n){
    struct node *preve,*cure;
    preve=malloc(sizeof(struct node));
    cure=malloc(sizeof(struct node));

    struct node *temp;
    temp=malloc(sizeof(struct node));

    int key;
    key=n;
    preve = head;
    cure = head -> next;
    while (cure != NULL){
        if (head-> val == key)
            {
                temp = head;
                head = head -> next;
                free(temp);
            }
        else {
            if (cure->val == key){
                preve -> next = cure -> next;
                free(cure);
                break;
            }
            preve = cure;
            cure = cure -> next;
        }
    }
}

void inserini(struct node *head, struct node *next, int n){

    struct node *preve,*cure, *temp;
    //preve=malloc(sizeof(struct node));
    //cure=malloc(sizeof(struct node));

    temp=malloc(sizeof(struct node));
    temp->val=8;
    temp->next=head;
   	head = temp;

}

void imprimir(struct node *head, struct node *next, int n){
    struct node *z;
    z = malloc(sizeof(struct node));
    z = head;
    //val=n;
    while (z != NULL)
    {
        printf("%d\n", z->val);
        z = z -> next;
    }
    printf("\n\n");
}
void cat_two_list(struct node *head,struct node *next,int n){
    crearlista(head,6);
    crearlista(head,7);
    imprimir(head,next,6);
    imprimir(head,next,7);
}

