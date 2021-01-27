// Write a program to sort the array of 5 elements. in ascending order.

#include<stdio.h>

int main()
{
    int arr[5],i,j,temp;

    for(i=0;i<5;i++)
    {
        printf("Enter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Elements after sorting in ascending order :\n");

    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}