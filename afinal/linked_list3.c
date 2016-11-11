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

    struct node *head, *middle, *tail, *prev, *cur;
    head=malloc(sizeof(struct node));
    middle=malloc(sizeof(struct node));
    tail=malloc(sizeof(struct node)); //tal apunta a lo que esta reservando malloc
    prev=malloc(sizeof(struct node));
    cur=malloc(sizeof(struct node));

    head -> val=5;
    middle -> val =2;
    tail -> val = 3;
    head -> next = middle;
    middle -> next = tail;
    tail -> next = NULL;

    struct node *t;
    t = head;
    printf("%d", t->val);
    t = t ->  next;
    printf("%d", t->val);
    t = t ->  next;
    printf("%d", t->val);
}

