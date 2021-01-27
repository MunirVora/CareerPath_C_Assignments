// Write a program to find the simple Interest.

#include<stdio.h>

int main()
{
    float principle, rate,  time;
    float interest;

    printf("Enter Principle Amount : ");
    scanf("%f",&principle);

    printf("Enter Rate : ");
    scanf("%f",&rate);

    printf("Enter Time : ");
    scanf("%f",&time);

    interest = principle * rate * time /100;

    printf("The Interest is : %f",interest);
    
    return 0;
}