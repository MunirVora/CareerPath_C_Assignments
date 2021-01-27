// Write a program to find out the max number from given 10 elements of array.

#include<stdio.h>

int main()
{
    int arr[10],i,max=0;

    for(i=0;i<10;i++)
    {
        printf("Enter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<10;i++)
    {
        if(arr[i]>arr[max])
        {
            max=i;
        }
    }

    printf("The max number of the array is : %d",arr[max]);

    return 0;
}