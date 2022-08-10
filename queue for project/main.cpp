#include<iostream>
#define max_size 101
using namespace std;
int A[max_size],a;
int front=-1,rear=-1;
void EnQueue()
{
    cout<<"Enter the element\n";
    cin>>a;
    if(rear==max_size-1)
        cout<<"Queue overflow";
    else if(front==-1&&rear==-1){front++;rear++;}
    else
        rear++;
    A[rear]=a;
}
void DeQueue()
{
    if(front==-1)
        cout<<"Overflow";
    else if(front==rear){front=-1;rear=-1;}
    else
        front++;
}
void Display()
{
    int i;
    cout<<"Queue is :";
    for(i=front;i<=rear;i++)
     {
    cout<<A[i];
    cout<<"\t";
     }
}
int main()
{
    EnQueue();
    EnQueue();
    EnQueue();
    Display();
}
