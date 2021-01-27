// Write a Program of find the element of given position from the array.

#include<stdio.h>

int main()
{
    int n,i,arr[n],pos;

    printf("Enter the number of elements in array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter the position of the element : ");
    scanf("%d",&pos);

    printf("The element of postion %d is : %d",pos,arr[pos-1]);
    
    return 0;
}