// Write a program to enter a five elements using Array and print it on a screen.

#include<stdio.h>

int main()
{
    int arr[5],i;

    for(i=0;i<5;i++)
    {
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("Element %d is : %d\n",i+1,arr[i]);
    }

    return 0;
}