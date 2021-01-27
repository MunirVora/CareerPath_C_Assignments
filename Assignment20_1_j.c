// Write a program you have to make a summation of first and last Digit.
// (E.g. 1234 ans:-5)

#include<stdio.h>

int main()
{
    int num,temp,sum=0,firstdigit,lastdigit;

    printf("Enter the number : ");
    scanf("%d",&num);

    temp = num;

    lastdigit = num % 10;

    while(num>=10)
    {
        num /= 10;
    }
    firstdigit = num;

    sum = firstdigit + lastdigit;

    printf("The sum of first and last digit of %d is : %d",temp,sum);

    return 0;
}