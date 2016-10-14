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

main()
{
    int i,n;
    struct node *head;
    struct node *next;
    head=malloc(sizeof(struct node));
    next=malloc(sizeof(struct node));
    //head -> val = 1;


//crear lista
    crearlista(head,next,6);
//imprimir lista
    struct node *t;
    t = malloc(sizeof(struct node));
    t = head;

    while (t != NULL)
    {
        printf("%d\n", t->val);
        t = t -> next;
    }
//eliminar
    eliminar(head,next,3);
    printf("\n\n");
    struct node *s;
    s = malloc(sizeof(struct node));
    s = head;

    while (s != NULL)
    {
        printf("%d\n", s->val);
        s = s -> next;
    }
//insertar al inicio
    inserini(head,next,22);
    printf("\n\n");
    struct node *r;
    r = malloc(sizeof(struct node));
    r = head;

    while (r != NULL)
    {
        printf("%d\n", r->val);
        r = r -> next;
    }

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
    }*/
    head -> val = n;
    //preve = head;
    //cure = head -> next;


    //while (cure != NULL){}


}

