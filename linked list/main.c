#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;

int main()
{
     {
            struct node *p=head,*r;
            int x,i=0;
           printf("enter the index\t");
           scanf("%d",&x);
           while(i<x)
           {
               r=p;
               i++;
               p=p->next;
           }
           r->next=p->next;
        }
    return 0;
}
