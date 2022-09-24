#include <stdio.h>

/*
 * array pointer
 */
int main (void)
{
	int price[5] = { 7, 4, 1, 8, 6 };

	printf("%d\n", *(price + 5));
	return(0);
}
