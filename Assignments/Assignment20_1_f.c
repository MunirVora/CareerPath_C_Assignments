// write a program you have to print the table of given number.

#include<stdio.h>

int main()
{
    int num,i;

    printf("Enter the num : ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d %2d %2d\n",num,i,num*i);
    }
    return 0;
}