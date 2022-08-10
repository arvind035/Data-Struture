#include <stdio.h>
#define max_size 101
int A[max_size],a;
int front = -1;
int rear = -1;
void EnQueue(){printf("Enter the element:");scanf("%d",&a);
if(rear == max_size-1)
printf("error:Queue overflow\n");
else if(front == -1&&rear == -1)
{front++;
rear++;}
else
rear++;
A[rear] = a;
}
void DeQueue(){
if(front == -1)
printf("error:Queue underflow\n");
else if(front == rear)
{front = -1;
rear =-1;
}
else
front++;
}
void print(){
int i;
printf("Queue is:");
for(i=front;i<=rear;i++)
printf("%d ",A[i]);
printf("\n");
}
int main()
{
   EnQueue();
   EnQueue();
   EnQueue();print();
   DeQueue();print();
   DeQueue();
   print();
   return 0;
}
