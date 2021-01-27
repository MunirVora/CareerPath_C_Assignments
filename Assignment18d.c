//     *
//    **
//   ***
//  ****
// *****

#include<stdio.h>

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        // for space
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        // for number
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}