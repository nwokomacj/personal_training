#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - prints  hello world
 *
 */
int main()
{
	int age;
	char name[20], op;
	char grade;
	double num1;
	double num2;

	printf("Enter num1: ");
	scanf("%lf", &num1);
	printf("Enter op: ");
	scanf(" %c", &op);
	printf("Enter num2: ");
	scanf("%lf", &num2);
	
	if (op == '+')
	{
	printf("%f\n", num1 + num2);
	} else if(op == '-')
	{
	printf("%f\n", num1 - num2);
	} else if(op == '/')
	{
	printf("%f\n", num1 / num2);
	} else if(op == '*')
	{
	printf("%f\n", num1 * num2);
	} else
	{
	printf("invalid operator\n");
	}	

	printf("Enter your name: ");
	fgets( name, 20, stdin);
	printf("Your name is %s\n", name);
	
	printf("Enter your grade: ");
	scanf("%c", &grade);
	printf("Your grade is %c\n", grade);

	printf("Enter your age: ");
	scanf("%d", &age);
	printf("You are %d years old\n", age);

	printf("Hello world!\n");
	printf("the beginning of the journey\n");
	printf("%f\n", 5.6 + 5.6);
	printf("%f\n", pow(2, 3) );


	return (0);
}
