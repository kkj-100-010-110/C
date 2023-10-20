#include "stack.h"

int main()
{
	printf("is stack empty? %s\n", is_empty() ? "true" : "false");

	for (int i = 0; i < 10; i++) {
		push(i);
	}

	//make_empty();

	for (int i = 0; i < 10; i++) {
		printf("pop: %d\n", pop());
	}

	printf("is stack empty? %s\n", is_empty() ? "true" : "false");

	return 0;
}
