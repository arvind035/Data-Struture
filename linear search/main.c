#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[]={4,5,8,4,9,12,15},n;
    printf("Enter the element which you wish to search\n");
    scanf("%d",&n);
    seq_search(A,7,n);
    return 0;
}
void seq_search(int A[],int N,int item)
{
    int flag=1,k;
    for(k=0;k<=N-1;k++)
    {
        if(A[k]==item)
        {
            flag=0;
            printf("Search successful");
        }
    }
        if(flag==1)
            printf("Search unsuccessful");
}
