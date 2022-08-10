#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[]={7,4,6,8,4,9,10},n;
    printf("Enter the element which you wish to search\n");
    scanf("%d",&n);
    bin_search(A,7,n);
    return 0;
}
void bin_search(int L[],int N,int item)
{
    int l=0,u=N-1,m;
    while(l<=u)
    {
        m=(l+u)/2;
        if(item=L[m])
        {
            printf("Search success at index %d Item found",m);
            return;
        }
        else if(item>L[m])
            l=l+m;
        else
            u=m-1;
    }
    printf("Search successful");
}
