//     1
//    21
//   321
//  4321
// 54321 

#include<stdio.h>

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        // for space
        for(j=i;j<=4;j++)
        {
            printf(" ");
        }
        // for number
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}