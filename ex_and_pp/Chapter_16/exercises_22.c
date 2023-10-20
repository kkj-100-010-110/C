#include <stdio.h>

enum chess_pieces {
	KING,
	QUEEN,
	ROOK,
	BISHOP,
	KNIGHT,
	PAWN
};

int main()
{
//	const int piece_value[6] = { 200, 9, 5, 3, 3, 1 };
	
	const int piece_value[] = {
		[KING] = 200,
		[QUEEN] = 9,
		[ROOK] = 5,
		[BISHOP] = 3,
		[KNIGHT] = 3,
		[PAWN] = 1
	};

	for (int i = 0; i < 6; i++)
		printf("%d ", piece_value[i]);
	printf("\n");

	return 0;
}
