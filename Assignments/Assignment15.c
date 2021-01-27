// Write a program to find the Max number from the given three number
// using Nested If

#include<stdio.h>

int main()
{
    float num1,num2,num3;

    printf("Enter the first number : ");
    scanf("%f",&num1);
    

    printf("Enter the second number : ");
    scanf("%f",&num2);

    printf("Enter the third number : ");
    scanf("%f",&num3);

    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("%f is maximum number.",num1);
        }
        else
        {
                printf("%f is maximum number.",num3);
        }  
    }
    else
    {
        if (num2>num3)
        {
            printf("%f is maximum number.",num2);
        }
        else
        {
            printf("%f is maximum  number.",num3);
        }
    }
    return 0;
}