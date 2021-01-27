//  Write a program user enter the 5 subjects mark. You have to make a total
// and find the percentage.
// percentage > 75 you have to print “Distinction”percentage > 60 and percentage <= 75 you have to print “First class”
// percentage >50 and percentage <= 60 you have to print “Second class”
// percentage > 35 and percentage <= 50 you have to print “Pass class”
// Otherwise print “Fail”

#include<stdio.h>

int main()
{
    float maths,english,science,computer,social,marks,percentage;

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

    if (percentage>75)
    {
        printf("Distinction");
    }
    else if (percentage<=75 && percentage>60)
    {
        printf("First class");
    }
    else if (percentage<=60 && percentage >50)
    {
        printf("Second class");
    }
    else if (percentage<=50 && percentage>35)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    
    return 0;
}