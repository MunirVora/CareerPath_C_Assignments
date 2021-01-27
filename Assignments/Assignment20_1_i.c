// Write a program make a summation of given number.

#include<stdio.h>

int main()
{
    int num,sum=0,digit,temp;

    printf("Enter the number : ");
    scanf("%d",&num);

    temp = num;

    while(num>0)
    {
        digit = num % 10;
        sum = sum + digit;
        num /= 10;
    }

    printf("The summation of digits of %d is : %d",temp,sum);

    return 0;
}