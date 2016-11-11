#include <stdio.h>
#include<stdlib.h>

//void crearlista(*head,int n);

struct node
{
    int val;
    struct node *next;
};

main()
{
    int val,i,n;
    n=8;
    struct node *head, *middle, *tail, *prev, *cur;
    head=malloc(sizeof(struct node));
    middle=malloc(sizeof(struct node));
    tail=malloc(sizeof(struct node)); //tal apunta a lo que esta reservando malloc
    prev=malloc(sizeof(struct node));
    cur=malloc(sizeof(struct node));

    head -> val=1;
    middle -> val =2;
    tail -> val = 3;
    head -> next = middle;
    middle -> next = tail;
    tail -> next = NULL;

/*    struct node *t;
    t = head;
    printf(“%d”, t­>val);
    t = t ­>  next;
    printf(“%d”, t­>val);
    t = t   next;
    printf(“%d”, t­>val);*/

//crear lista

    head = malloc(sizeof(struct node));
    head -> val = 1;
    prev = head;
    for (i = 2; i <= n; i++)
    {
        cur = malloc(sizeof(struct node));
        cur -> val = i;       //i para darle al cur
        prev -> next = cur;
        prev = cur;
    }
    prev -> next = NULL;

//imprimir lista
    struct node *t;
    t = head;
    while (t != NULL)
    {
        printf("%d\n", t->val);
        t = t ->  next;
    }
//eliminar

    struct node *temp;
    int key;
    key=1;
    prev = head;
    cur = head -> next;
    while (cur != NULL)
    {
        if (head-> val == key)
            {
                temp = head;
                head = head -> next;
                free(temp);
            }


        else {
            if (cur->val == key)
            {
                prev -> next = cur -> next;
                free(cur);
                break;
            }
            prev = cur;
            cur = cur -> next;
        }
    }

//imprimir lista
//    struct node *t;
    t = head;
    while (t != NULL)
    {
        printf("%d\n", t->val);
        t = t ->  next;
    }


}

/*void crearlista(sruct node *head,int n)
{
    int i;
    head = malloc (sizeof(struct node));
    head ­> val = 1;
    prev = head;
    for (i = 2; i <= n; i++)
    {
        cur = malloc (sizeof (struct node));
        cur ­> val = i;
        prev ­> next = cur;
        prev = cur;
    }
    prev ­> next = NULL;
}*/



