// Write a program to find out the max number from given array using function.

#include<stdio.h>

int Max(int Arr[] ,int Size)
{
    int maxNumOfArray = Arr[0];
    for(int i = 1 ; i <= Size; i++)
    {
        if(Arr[i] > maxNumOfArray)
        {
            maxNumOfArray = Arr[i];   
        }
    }
    return maxNumOfArray;
}


int main()
{
    int arr[1000],size,maxNum;

    printf("How many element you want in the array : ");
    scanf("%d",&size);

    // Getting element form the user
    for(int i = 0 ; i < size ; i++)
    {
        printf("Enter the %d element : ", i+1);
        scanf("%d", &arr[i]);
    }

    // Getting the max number of the array and printing it
    maxNum = Max(arr, size);

    printf("The max number is : %d ", maxNum);

    return 0;
}