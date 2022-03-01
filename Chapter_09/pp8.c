#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define DICE_NUM 6

int roll_dice(void);
bool play_game(void);

int roll_dice(void)
{
	int sum;

	sum = (rand() % DICE_NUM) + (rand() % DICE_NUM) + 2;

	return sum;
}

bool play_game(void)
{
	int n = roll_dice();

	printf("\nYou rolled: %d\n", n);
	if (n == 7 || n == 11) {
		printf("You win!\n\n");
		return true;
	}
	else if (n == 2 || n == 3 || n == 12) {
		printf("You lose!\n\n");
		return false;
	}
	else {
		printf("Your point is %d\n", n);
		while (1) {
			n = roll_dice();
			printf("You rolled: %d\n", n);
			if (n == 7) { 
				printf("You lose!\n\n");
				return false;
			}
			else if (n == 8) {
				printf("You win!\n\n");
				return true;
			}
		}
	}
}

int main(void)
{
	int win_point = 0, lose_point = 0;
	char again;

	srand((unsigned) time(NULL));

	while (1) {
		play_game() == true ? win_point++ : lose_point++;
		printf("Play again? ");
		scanf(" %c", &again);
		if (again == 'n')
			break;
	}
	
	printf("\nWins: %d	Losses: %d\n", win_point, lose_point);

	return 0;
}
