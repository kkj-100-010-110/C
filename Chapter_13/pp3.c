/* Deals a random hand of cards */

#include <stdbool.h> // C99 only
#include <stdio.h>
#include <stdlib.h> 
// srand function initializes C;s random number generator. 
// rand function produces an apparently random number each time it's called.
#include <time.h> // time function returns the current time.

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
	bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
	int num_cards, rank, suit;
	const char *rank_code[] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
	// {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
	const char *suit_code[] = {"clubs", "diamonds", "spades", "hearts"};
	// {'c', 'd', 'h', 's'};

	srand((unsigned) time(NULL));

	printf("Enter number of cards in hand: ");
	scanf("%d", &num_cards);

	printf("Your hand:");
	while (num_cards > 0) {
		suit = rand() % NUM_SUITS; // picks a random suit
		rank = rand() % NUM_RANKS; // picks a random rank
		if (!in_hand[suit][rank]) {
			in_hand[suit][rank] = true;
			num_cards--;
			printf("\n%s of %s", rank_code[rank], suit_code[suit]);
		}
	}
	printf("\n");
	
	return 0;
}
