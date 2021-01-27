// Write a program to find out the second smallest number from the array.

#include<stdio.h>

int main()
{
    int n,i,j,arr[n],temp;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The second smallest element of array is : %d",arr[1]);

    return 0;
}