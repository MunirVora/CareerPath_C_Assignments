// Write a program to convert the string from uppercase to lowercase and vice versa.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i;

    printf("Enter the string : ");
    gets(str);

    printf("The string is : %s\n",str);

    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            str[i] -= 32; 
        }

        else if(str[i]>=65&&str[i]<=90)
        {
            str[i] += 32;
        }

        else;
        
    }

    printf("The string after convert : %s\n",str);

    return 0;
}