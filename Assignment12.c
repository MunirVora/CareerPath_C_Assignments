// Write a Program to check the given number is prime or not prime. 

#include<stdio.h>

int main()
{
    int i,num,p=0;

    printf("Enter the number : ");
    scanf("%i",&num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            p++;
        }
    }

    if(p==2)
    {
        printf("The number is a prime number.");
    }
    else
    {
        printf("The number is not a prime number.");
    }
    return 0;
}