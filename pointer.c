#include <stdio.h>

/*
 * using pointer to initialize a variable
 */
int main(void)
{
	int age;
	int *address = &age;
		*address = 37;
		printf("%d\n", *address);
	return (0);
}
