// Write a program you have to print the Fibonacci series up to user given
// number.

#include<stdio.h>

int main()
{
    int n1=0,n2=1,n3,num,i;

    printf("Enter the element : ");
    scanf("%d",&num);

    if(num==1)
    {
        printf(" %d ",n1);
    }

    else if(num==2)
    {
        printf(" %d %d ",n1,n2);
    }

    else
    {
        printf("%d %d ",n1,n2);

            for(i=3;i<=num;i++)
            {
                n3=n1+n2;

                printf("%d ",n3);

                n1=n2;
                n2=n3;
            }
    }
    return 0;
}