#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;
	int row_sum1, row_sum2, row_sum3, row_sum4, col_sum1, col_sum2, col_sum3, col_sum4;
	int diagonal_sum1, diagonal_sum2;

	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
			&n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

	printf("%2d %2d %2d %2d\n", n1, n2, n3, n4);
	printf("%2d %2d %2d %2d\n", n5, n6, n7, n8);
	printf("%2d %2d %2d %2d\n", n9, n10, n11, n12);
	printf("%2d %2d %2d %2d\n\n", n13, n14, n15, n16);

	row_sum1 = n1 + n2 + n3 + n4;
	row_sum2 = n5 + n6 + n7 + n8;
	row_sum3 = n9 + n10 + n11 + n12;
	row_sum4 = n13 + n14 + n15 + n16;
	col_sum1 = n1 + n5 + n9 + n13;
	col_sum2 = n2 + n6 + n10 + n14;
	col_sum3 = n3 + n7 + n11 + n15;
	col_sum4 = n4 + n8 + n12 + n16;
	diagonal_sum1 = n1 + n6 + n11 + n16;
	diagonal_sum2 = n4 + n7 + n10 + n13;
	
	printf("Row sums: %d %d %d %d\n", row_sum1, row_sum2, row_sum3, row_sum4);
	printf("Column sums: %d %d %d %d\n", col_sum1, col_sum2, col_sum3, col_sum4);
	printf("Diagonal sums: %d %d\n", diagonal_sum1, diagonal_sum2);

	return 0;
}
