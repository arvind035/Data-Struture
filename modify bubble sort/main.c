#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,A[80];
    printf("How many element in array Max(80) :\n");
    scanf("%d",&n);
    printf("Enter the element of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
   // bubble_sort(A,n);
    return 0;
}
/*void bubble_sort(int a[],int n)
{
    int round,j,temp,flag=1;
    for(round=0;round<n;round++)
}*/
