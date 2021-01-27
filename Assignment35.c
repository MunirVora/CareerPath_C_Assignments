// Write a program to copy string from one string to another string without using string
// function.

#include<stdio.h>

int main()
{
    char s1[100],s2[100],i;

    printf("Enter the string 1 : ");
    gets(s1);

    for(i=0;s1[i]!='\0';i++)
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';

    printf("The string 2 is : %s",s2);

    return 0;
}