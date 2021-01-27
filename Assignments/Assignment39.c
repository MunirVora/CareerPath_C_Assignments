// write a program to find out the Square and cube of given number using function.

#include<stdio.h>

int sqr(int n);
int cube(int n);

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d",&num);

    printf("The square of the number is : %d\n",sqr(num));
    printf("The cube of the number is : %d\n",cube(num));
    
    return 0;
}

int sqr(int n)
{
    int square = n * n;

    return square;
}

int cube(int n)
{
    int cube = n * n * n;

    return cube;
}