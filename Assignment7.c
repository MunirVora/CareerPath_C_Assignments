// Write a program to convert temperature from degree centigrade to
// Fahrenheit. 

#include<stdio.h>

int main()
{
    float degree, fahrenheit;

    printf("Enter the temperature in degree : ");
    scanf("%f",&degree);

    fahrenheit = degree*9/5 +32;

    printf("The temperature in fahrenheit is : %f",fahrenheit);
    
    return 0;
}