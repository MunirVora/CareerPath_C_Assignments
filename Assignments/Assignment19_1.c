// Write a program of to find out the Area of Triangle, Rectangle and Circle
// using If Condition.(Must Be Menu Driven) 

#include<stdio.h>
#define PI 3.14

int main()
{
    int choice;
    float base,height,length,width,radius;
    float aot,aor,aoc;

    printf("No.1 is for area of triangle.\n");
    printf("No.2 is for area of rectangle.\n");
    printf("No.3 is for area of circle.\n");

    printf("Enter the choice : ");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("Enter the value of base : ");
        scanf("%f",&base);

        printf("Enter the value of height : ");
        scanf("%f",&height);

        aot = 0.5 * base * height;

        printf("The area of triangle is : %0.2f",aot);
    }
    else if(choice==2)
    {
        printf("Enter the value of length = ");
        scanf("%f",&length);

        printf("Enter the value of width = ");
        scanf("%f",&width);

        aor = length * width;

        printf("The area of rectangle is : %0.2f",aor);
    }
    else if(choice==3)
    {
        printf("Enter the value of radius : ");
        scanf("%f",&radius);

        aoc = PI * radius *  radius;

        printf("The area of the circle is : %0.2f",aoc);
    }
    else
    {
        printf("Invalid choice.");
    }
    
    return 0;
}