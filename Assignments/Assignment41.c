// write a program to print the Fibonacci series using function.

#include<stdio.h>

void fibonacci(int range);

int main()
{
    int range;

    printf("Enter the range of the fibonacci series : ");
    scanf("%d",&range);

    printf("The fibonacci series is : ");
    fibonacci(range);
    return 0;
}

void fibonacci(int range)
{
    int a=0,b=1,c;
    while(a<=range)
    {
        printf("%d ",a);

        c = a+b;
        a = b;
        b = c;
    }
}