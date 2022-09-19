#include <stdio.h>

/**
 * main - deferencing pointers
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("Value of 'n': %d\n", n);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'n': %p\n", &n);
	*p = 402;
	printf("Value of 'n': %d\n", n);
	return (0);
}
