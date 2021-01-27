// Write a program to calculate sum of 5 subjects & find the percentage.
// Subject marks entered by user.

#include<stdio.h>

int main()
{
    float maths,english,science,computer,social;
    float marks,percentage;

    printf("Enter marks of maths : ");
    scanf("%f",&maths);
    
    printf("Enter marks of english : ");
    scanf("%f",&english);
    
    printf("Enter marks of science : ");
    scanf("%f",&science);

    printf("Enter marks of computer : ");
    scanf("%f",&computer);

    printf("Enter marks of social : ");
    scanf("%f",&social);

    marks = maths + english + science + computer + social;
    percentage = marks/500 * 100;

    printf("\nTotal marks : %0.2f\n",marks);
    printf("Percentage : %0.2f\n",percentage);

    return 0;
}