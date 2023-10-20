#include <stdio.h>
#include <ctype.h>

#define SIZE 100
#define END_MARK 10

int main(void)
{
	char message[SIZE];

	printf("Enter message: ");

	for (int i = 0; i < SIZE; i++) {
		scanf("%c", &message[i]);
		if (message[i] == '\n')
			break;
	}

	printf("In B1FF-speak: ");
	for (int i = 0; message[i] != '\n'; i++) {
		switch (toupper(message[i])) {
			case 'A':
				printf("4");
				break;
			case 'B':
				printf("8");
				break;
			case 'E':
				printf("3");
				break;
			case 'I':
				printf("1");
				break;
			case 'O':
				printf("0");
				break;
			case 'S':
				printf("5");
				break;
			default:
				printf("%c", toupper(message[i]));
				break;
		}
	}
	for (int i = 0; i < END_MARK; i++)
		printf("!");
	printf("\n");
	
	return 0;
}
