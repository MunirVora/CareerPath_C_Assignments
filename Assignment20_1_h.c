// Write a program to find out the max from given number.
// (E.g. No: -1562 Max number is 6 ) 

#include<stdio.h>

int main()
{
    int num,largest=0,digit,temp;

    printf("Enter the number : ");
    scanf("%d",&num);

    temp = num;
    
    while(num>0)
    {
        digit = num % 10;

        if(digit>largest)
        {
            largest=digit;
        }

        num /= 10;
    }

    printf("The largest digit of %d is : %d",temp,largest);
    return 0;
}