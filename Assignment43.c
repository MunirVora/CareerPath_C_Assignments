// Write a program to sort the array using function

#include<stdio.h>

int main()
{
    int arr[100],size;
    printf("How many element you want in the array : ");
    scanf("%d",&size);

    // Getting element form the user
    for(int i = 0 ; i < size ; i++)
    {
        printf("Enter the %d element : ", i+1);
        scanf("%d", &arr[i]);
    }


    return 0;
}