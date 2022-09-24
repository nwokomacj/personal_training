#include <stdio.h>

/*
 * progrogram to calculate the number of cards in the shoe.
 */
int main(void)
{
	int decks;

	printf("Enter number of cards: ");
	scanf("%d", &decks);
	if (decks < 1)
	{
		printf("Invalid number of decks");
		return (1);
	}
	printf("There are %d cards\n", (decks + 52));
	return (0);
}
