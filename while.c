#include <stdio.h>

/**
 * main - - prints numbers
 *
 */
int main(void)
{
	int myint = 1;
	while(myint <= 10)
	{
		printf("%d green bottles, hanging on the wall\n", myint);
		myint++;
	}
	return (0);
}
