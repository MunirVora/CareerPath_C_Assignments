/* 
Write a program to make addition, Subtraction, Multiplication and Division of
Two Numbers.

*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int num1,num2;
	char x;

	printf("Enter First Number :");
	scanf("%d",&num1);
	
	printf("Enter Second Number :");
	scanf("%d",&num2);

	fflush(stdin);

	printf("Enter the operator:");
	scanf("%c",&x);
	
	switch(x)
	{
	
	case '+':
		printf("The sum is:%d",num1+num2);
		break;
		
			case '-':
				printf("The sub is:%d",num1-num2);
				break;
					
					case '*':
						printf("The multi is:%d",num1*num2);
						break;
						
							case '/':
								printf("The div is:%d",num1/num2);
								break;
								
								default:
									printf("Invalid operator");
		   
 	}
     return 0;
}