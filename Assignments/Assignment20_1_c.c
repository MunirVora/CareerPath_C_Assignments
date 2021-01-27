// write a program to print the 100 to 81 using do....while loop.
#include<stdio.h>

int main()
{
    int i=100;

    do{
        printf("%d\n",i);
        i--;
    }while(i<=100 && i>=81);
    return 0;
}