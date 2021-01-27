// Write a program to find out the Max number from given Matrix.

#include<stdio.h>

int main()
{
    int row,column,i,j,max;

    printf("Enter the number of rows : ");
    scanf("%d",&row);

    printf("Enter the number of columns : ");
    scanf("%d",&column);

    int mat[row][column];

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("Enter the element number [%d][%d] : ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }

    max = mat[0][0]; 

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(mat[i][j]>max)
            {
                max = mat[i][j];
            }
        }
    }

    printf("The maximum element of matrix is : %d",max);

    return 0;
}