#include <stdio.h>

typedef enum {
	EMPTY,
	PAWN,
	KNIGHT,
	BISHOP,
	ROOK,
	QUEEN,
	KING
} Piece;

typedef enum {
	BLACK,
	WHITE
} Color;

typedef struct {
	Piece p;
	Color c;
} Square;

int main()
{
	Square board[8][8] =
	{ { {4, 0}, {2, 0}, {3, 0}, {5, 0}, {6, 0}, {3, 0}, {2, 0}, {4, 0} },
	  { {1, 0}, {1, 0}, {1, 0}, {1, 0}, {1, 0}, {1, 0}, {1, 0}, {1, 0} },
	  { {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0} },
	  { {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0} },
	  { {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0} },
	  { {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0} },
	  { {1, 1}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {1, 1}, {1, 1} },
	  { {4, 1}, {2, 1}, {3, 1}, {5, 1}, {6, 1}, {3, 1}, {2, 1}, {4, 1} } };

	//for (int i = 0; i < 8; i++) {
	//	switch (i) {
	//		case 0: case 7:
	//			board[0][i].p = ROOK; 
	//			board[0][i].c = BLACK; 
	//			break;
	//		case 1: case 6:
	//			board[0][i].p = KNIGHT; 
	//			board[0][i].c = BLACK; 
	//			break;
	//		case 2: case 5:
	//			board[0][i].p = BISHOP; 
	//			board[0][i].c = BLACK; 
	//			break;
	//		case 3:
	//			board[0][i].p = QUEEN; 
	//			board[0][i].c = BLACK; 
	//			break;
	//		case 4:
	//			board[0][i].p = KING; 
	//			board[0][i].c = BLACK; 
	//			break;
	//	}
	//}
	
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			printf("(%d, %d) ", board[i][j].p, board[i][j].c);
		}
		printf("\n");
	}

	return 0;
}
