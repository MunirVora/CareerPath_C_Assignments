// Write a Program of Addition, Subtraction ,Multiplication and Division using
// Switch case.(Must Be Menu Driven) 

#include<stdio.h>

int main()
{
    float num1,num2;
    char operator;

    printf("The '+' is for addition.\n");
    printf("The '-' is for substraction.\n");
    printf("The '*' is for multiplication.\n");
    printf("The '/' is for division.\n");
    

    printf("Enter the number 1 : ");
    scanf("%f",&num1);
    
    printf("Enter the number 2 : ");
    scanf("%f",&num2);

    fflush(stdin);

    printf("Enter the operator : ");
    scanf("%c",&operator);

    switch (operator)
    {
    case '+':
        printf("The addition is : %0.2f",num1 + num2);
        break;

            case '-':
                printf("The substraction is : %0.2f",num1 - num2);
                break;

                    case '*':
                        printf("The multiplication is : %0.2f",num1 * num2);
                        break;

                            case '/':
                                printf("The division is : %0.2f",num1 / num2);
                                break;

                                    default:
                                    printf("Invalid operator.");
    }
    return 0;
}