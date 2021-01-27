// Write a program to count the total number of word from given string without using
// string function.

#include<stdio.h>

int main()
{
    char str[100];
    int i,count=0;

    printf("Enter the string : ");
    gets(str);

    for(i=0;str[i]!=0;i++)
    {
        if(str[i]==' ' && str[i+1] != ' ')
        count++;
    }

    printf("number of words in given string are : %d\n",count+1);

    return 0;
}