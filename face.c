#include <stdio.h>
#include <stdlib.h>
/**
 * Program to evaluate face values
 */
int main(void)
{
	char card_name [3];

	printf("Enter the card_name: ");
	scanf("%s", card_name);
	int val = 0;
	if (card_name [0] == 'K')
	{
		val = 10;
	} else if (card_name [0] == 'Q')
	{
		val = 10;
	} else if (card_name [0] == 'J')
	{
		val = 10;
	} else if (card_name [0] == 'A')
	{
		val = 11;
	} else
	{
		val = atoi (card_name);
	}
	printf("The card value is: %d\n", val);
	return (0);
}
