// Write a program to enter a ten elements using Array and make a summation of the
// numbers and average of summation.

#include<stdio.h>

int main()
{
    int arr[10],sum=0,i;

    for(i=0;i<10;i++)
    {
        printf("Enter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    printf("The summation of numbers is : %d\n",sum);
    printf("The average of summation is : %0.2f\n",(float)sum/10);

    return 0;
}