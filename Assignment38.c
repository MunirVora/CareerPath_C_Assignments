// Write a program to perform addition, subtraction, multiplication and division of two
// numbers using Function.

#include<stdio.h>

int add(int n1,int n2);
int sub(int n1,int n2);
int multi(int n1,int n2);
float div(int n1,int n2);

int main()
{
    int num1,num2;

    printf("Enter the first number : ");
    scanf("%d",&num1);

    printf("Enter the second number : ");
    scanf("%d",&num2);

    printf("The addition of two numbers is : %d\n",add(num1,num2));
    printf("The substraction of two numbers is : %d\n",sub(num1,num2));
    printf("The multiplication of two numbers is : %d\n",multi(num1,num2));
    printf("The division of two numbers is : %0.2f\n",div(num1,num2));

    return 0;
}

int add(int n1,int n2)
{
    int result = n1 + n2;

    return result;
}

int sub(int n1,int n2)
{
    int result = n1 - n2;

    return result;
}

int multi(int n1,int n2)
{
    int result = n1 * n2;

    return result;
}

float div(int n1,int n2)
{
    float result = (float)n1 / (float)n2;

    return result;
}