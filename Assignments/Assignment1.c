/* 
1. Display This Information using printf
a. Your Name
b. Your Birth date
c. Your Age
d. Your Address

*/

#include<stdio.h>
#include<conio.h>
main()
{
	char name[20],address[20];
	int birthdate,age;
	
	printf("Enter Your Name:\n");
	scanf("%s",&name);
	
	printf("Enter Your Birth Date:\n");
	scanf("%d",&birthdate);
	
	printf("Enter Your Age:\n");
	scanf("%d",&age);
	
	printf("Enter Your Address:\n");
	scanf("%s",&address);
	
    printf("-------------------\n");

	printf("Your Name:%s\n",name);
	printf("Your Birth date:%d\n",birthdate);
	printf("Your Age:%d\n",age);
	printf("Your Address:%s\n",address);
	
}