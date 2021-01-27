// Write a program to make string reverse and check the given string is palindrome or
// not without using string function.

#include<stdio.h>

int main()
{
    char s[100],reverse_s[100];
    int i,length=0,flag=0;

    printf("Enter the string : ");
    gets(s);

    for(i=0;s[i]!='\0';i++)
    {
        length++;
    }

    printf("The length of string is : %d\n",length);

    // To reverse the string
    for(i=length-1;i>=0;i--)
    {
        reverse_s[length-i-1] = s[i];
    }

    printf("The reverse of the string is : %s\n",reverse_s);

    // to check if string is palindrome or not.
    for(i=0;i<length;i++)
    {
        flag=1;
        if(reverse_s[i] != s[i])
        {
            flag = 0; 
        }
    }
    
    // To check the string is palindrome or not.
    if(flag == 1)
    {
        printf("The string is palindrome.");
    }
    else
    {
        printf("The string is not palindrome.");
        
    }
    
    return 0;
}