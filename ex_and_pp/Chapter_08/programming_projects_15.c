#include <stdio.h>

#define SIZE 80

int main(void)
{
	char message[SIZE];
	char ch;
	int shift, end = 0;

	printf("Enter message to be encrypted: ");
/* scanf() */
//	for (int i = 0; i < SIZE; i++) {
//		scanf("%c", &message[i]);
//		if (message[i] == '\n')
//			break;
//	}
	while ((ch = getchar()) != '\n') {
		message[end] = ch;
		end++;
	}

	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift);

	for (int i = 0; i < end; i++) {
		if (message[i] == '\n')
			break;
		else if (message[i] >= 65 && message[i] <= 90)
			message[i] = ((message[i] - 'A') + shift) % 26 + 'A';
		else if (message[i] >= 97 && message[i] <= 122)
			message[i] = ((message[i] - 'a') + shift) % 26 + 'a';
		else
			;
	}

	printf("Encrypted message: ");
	for (int i = 0; i < end; i++)
		printf("%c", message[i]);
	printf("\n");

	return 0;
}
