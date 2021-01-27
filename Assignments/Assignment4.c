// Write a program to find the Area of Circle.

#include<stdio.h>
#define PI 3.14

int main()
{
    int radius;
    float area;

    printf("Enter the radius of the circle : ");
    scanf("%d",&radius);

    area = PI * radius * radius;

    printf("The area of the circle is : %f",area);

    return 0;
}