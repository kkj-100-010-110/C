#include <stdio.h>

#define SIZE 80

void encrypt(char *message, int shift);

int main(void)
{
	char message[SIZE];
	int shift;

	printf("Enter message to be encrypted: ");
	fgets(message, sizeof(message), stdin);

	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift);

	encrypt(message, shift);

	printf("Encrypted message: ");
	printf("%s\n", message);

	return 0;
}

void encrypt(char *message, int shift)
{
	for (char *p = message; *p != '\0'; p++) {
		if (*p == '\n') {
			*p = '\0';
			break;
		}
		else if (*p >= 65 && *p <= 90)
			*p = ((*p - 'A') + shift) % 26 + 'A';
		else if (*p >= 97 && *p <= 122)
			*p = ((*p - 'a') + shift) % 26 + 'a';
		else
			;
	}
}
