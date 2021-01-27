// write a program you have to find the factorial of given number.

#include<stdio.h>

int main()
{
    int i,fact=1,num;

    printf("Enter the number : ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        fact*=i;
    } 

    printf("The factorial of %d is : %d",num,fact);
    return 0;
}