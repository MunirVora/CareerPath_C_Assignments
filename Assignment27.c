// Write a program to print the Matrix using 2-D Array.

#include<stdio.h>

int main()
{
    int row,column,i,j;

    printf("Enter the number of rows : ");
    scanf("%d",&row);

    printf("Enter the number of columns : ");
    scanf("%d",&column);

    int mat[row][column];
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("Enter the value of matrix[%d][%d] : ",i+1,j+1);
            scanf("%d",&mat[i][j]); 
        }
    }

    printf("The matrix is : \n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}