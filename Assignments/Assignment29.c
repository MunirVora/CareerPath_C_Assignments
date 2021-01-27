// Write a program to make Subtraction of two matrix using 2-D Array.

#include<stdio.h>

int main()
{
    int row,column,i,j;

    printf("Enter the number of rows : ");
    scanf("%d",&row);

    printf("Enter the number of columns : ");
    scanf("%d",&column);

    int a[row][column],b[row][column],sub[row][column];

    printf("Enter the first matrix elements. \n");
    
    for(i=0;i<row;i++)   
    {
        for(j=0;j<column;j++)
        {
            printf("Enter the element [%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the second matrix elements. \n");

    for(i=0;i<row;i++)   
    {
        for(j=0;j<column;j++)
        {
            printf("Enter the element [%d][%d] : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("The substraction of two matrix is : \n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%2d ",sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}