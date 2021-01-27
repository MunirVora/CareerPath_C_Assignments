// Write a program to find position of given element in array.

#include<stdio.h>

int main()
{
    int n,i,arr[n],search,found=0;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to search the posion : ");
    scanf("%d",&search);

    for (i=0;i<n;i++)
    {
        if(arr[i] == search)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("The position of element %d is : %d",search,i+1);
    }
    else
    {
        printf("The element %d does not found in the array.",search);
    }
    
    return 0;
}