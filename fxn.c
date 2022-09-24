#include <stdio.h>
int larger(int a, int b)
{
	if (a > b)
		return a;
	else 
	return b;
}
/*
 * larger - prints the larger int
 */
int main(void)
{
	int greatest = larger(100, 1000);

	printf("%d is the greatest!\n", greatest);
	return (0);
}
