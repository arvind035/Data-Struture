#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void enter()
{
    struct node *p,*q;
    p=(struct node *)malloc(sizeof(struct node));
    printf("enter the data  ");
    scanf("%d",&p->data);
    p->next=NULL;
    printf("press 1 to insert from beginning\n");
    printf("press 2 to insert from last\n");
    printf("press 3 to insert from middle\n");
    int x,c,i=0;
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        {
            p->next=head;
            head=p;
            break;
        }
    case 2:
        {
            if(head==NULL)
           {
               head=p;
           }
           else
           {
               q=head;
               while(q->next!=NULL)
               {
                   q=q->next;
               }
               q->next=p;
           }
            break;
        }
    case 3:
        {
            struct node *r;
            printf("enter the location index is starting from zero \n");
            scanf("%d",&c);
            q=head;
            while(i<c-1)
            {
                r=q;
                q=q->next;
                i++;
            }
            p->next=q;
            r->next =p;
            break;
        }
   }
}
void display()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p=head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
void del()
{
    int n;
    printf("press 1 to delete from front\n");
    printf("press 2 to delete from last\n");
    printf("press 3 to delete from middle\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        {
            struct node *p;
            p=head;
            p=p->next;
            head=p;
            break;
        }
    case 2:
        {
            struct node *p,*r;
            p=head;
            while(p->next!=NULL)
            {
                r=p;
                p=p->next;
            }
            r->next=NULL;
            break;
        }
    case 3:
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
           break;
        }
    }
}
int main()
{
    while(1)
    {
        int n;
        printf("press 1 to enter \n");
        printf("press 2 to delete\n");
        printf("press 3 to dispaly\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            enter();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        default:
            exit(0);
        }
    }
}
