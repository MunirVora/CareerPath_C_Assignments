// Write a Program to show swap of two No's without using third variable. 

#include<stdio.h>

int main()
{
    int num1,num2;

    printf("Enter the first number : ");
    scanf("%d",&num1);
    
    printf("Enter the second number : ");
    scanf("%d",&num2);

    num1= num1+ num2; //if num1 = 1 & num2 = 2 then num1 = 3
    num2 = num1 - num2; // num2 = 3 - 2 = 1 
    num1= num1 - num2; // num1 = 3 - 1 = 2

    printf("First number : %d\n",num1);
    printf("Second number : %d\n",num2);
    
    return 0;
}