#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100],position,c,n,value;
    printf("Enter number of element in array\n");
    scanf("%d",&n);
    printf("Enter element of the array\n");
    for(c=0;c<n;c++)
        scanf("%d",&array[c]);
        printf("Enter the value to insert\n");
        scanf("%d",&value);
        printf("Enter the location where you wish to insert an element\n");
        scanf("%d",&position);
        for(c=n-1;c>=position-1;c--)
            array[c+1]=array[c];
        array[position-1]=value;
        printf("Resultant array is\n");
        for(c=0;c<=n;c++)
        printf("%d\t",array[c]);
        return 0;
}
