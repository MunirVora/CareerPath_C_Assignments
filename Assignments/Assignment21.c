// Write a program to enter a ten elements using Array and find out the to count the
// total number of odd and even numbers

#include<stdio.h>

int main()
{
    int arr[10],i,even_count=0,odd_count=0;

    for(i=0;i<10;i++)
    {
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }

    for (i=0;i<10;i++)  
    {
        if(arr[i] % 2 ==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    printf("The total number of even numbers is : %d\n",even_count);
    printf("The total number of odd numbers is : %d\n",odd_count);
    
    return 0;
}