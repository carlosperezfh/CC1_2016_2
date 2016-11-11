head = malloc(sizeof(struct node));
head -> val =1;
prev = head;
for (i=2; i<=n; i++)
{
    cur = mallo(sizeof(struct node));
    cur -> val = i;
    prev -> next = cur;
    prev = cur;
}
prev -> next = NULL;
