// Write a Program to check the given number is Positive, Negative. 

#include<stdio.h>

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d",&num);

    if(num>0)
    {
        printf("The number is positive.");
    }
    else if(num<0)
    {
        printf("The number is negative.");
    }
    else
    {
        printf("0 is neither positive or negative.");
    }
    return 0;
}