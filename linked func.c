#include <stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node *next;
};

void crearlista(struct node *head,struct node *next,int n);
void eliminar(struct node *head, struct node *next, int n);
void inserini(struct node *head, struct node *next, int n);
void imprimir(struct node *head, struct node *next, int n);

main()
{
    int i,n;
    struct node *head;
    struct node *next;
    head=malloc(sizeof(struct node));
    next=malloc(sizeof(struct node));
//crear lista
    crearlista(head,next,6);
    imprimir(head,next,6);

//eliminar
    eliminar(head,next,3);
    imprimir(head,next,6);
//insertar al inicio
    inserini(head,next,22);
    imprimir(head,next,6);
}

void crearlista(struct node *head,struct node *next,int n){
    int i;
    struct node *prev,*cur;
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
    /*struct node *preve,*cure, *temp;
    preve=malloc(sizeof(struct node));
    cure=malloc(sizeof(struct node));
    temp=malloc(sizeof(struct node));
    preve = head;
    cure = head -> next;
    while (cure != NULL){
        temp = head;
        head = head -> next;
        preve = cure;
        cure = cure -> next;
    }*/
    head -> val = n;
    //preve = head;
    //cure = head -> next;

    //while (cure != NULL){}
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

