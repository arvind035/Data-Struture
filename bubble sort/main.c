#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j,t,a[80];
    printf("How many element(Max:80)\n");
    scanf("%d",&n);
    printf("Enter the element\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
          if(a[j]>a[j+1])
          {
            t=a[j+1];
            a[j+1]=a[j];
            a[j]=t;
      }
   }
}
printf("After sorting with bubble sort:\n");
for(i=0;i<n;i++)
    printf(" %d",a[i]);
    return 0;
}
