// Write a program to find the Area of Triangle.

#include<stdio.h>

int main()
{
    int base, height;
    float area;

    printf("Enter the base of the triangle : ");
    scanf("%d",&base);

    printf("Enter the height of the triangle : ");
    scanf("%d",&height);

    area = 0.5 * base * height;

    printf("The area of the triangle is : %f",area);

    return 0;
}