// Write a program to find out the factorial of given number using function.

#include<stdio.h>

int factorial(int n);

int main()
{
    int num,facto;

    printf("Enter the number : ");
    scanf("%d",&num);

    printf("The factorial of %d is : %d",num,factorial(num));
    return 0;
}

int factorial(int n)
{
    int i,fact=1;

    for(i=1;i<=n;i++)
    {
        fact *= i;
    }
    return fact;
}