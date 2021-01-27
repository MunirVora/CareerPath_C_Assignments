// Write a program to make a square and cube of number. 

#include<stdio.h>

int main()
{
    int number;
    int square,cube;

    printf("Enter the number : ");
    scanf("%d",&number);

    square = number * number;
    cube = number * number *number;

    printf("The square of the number is : %d\n",square);
    printf("The cube of the number is : %d\n",cube);
    
    return 0;
}