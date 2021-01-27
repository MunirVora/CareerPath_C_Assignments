// Write a program to print the number in reverse order.

#include<stdio.h>

int main()
{
    int num,rev=0,remainder,temp;

    printf("Enter the number : ");
    scanf("%d",&num);

    temp = num;

    while(num!=0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num/=10;
    }

    printf("The reverse number of %d is : %d",temp,rev);

    return 0;
}