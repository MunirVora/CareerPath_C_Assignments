// Write a program to find out the length of given string without using string function.

#include<stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter the string : ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {

    }
    printf("The length of string is : %d",i);
    return 0;
}