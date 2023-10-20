#include "stack.h"

struct node *top = NULL;

void make_empty(void)
{
	struct node *temp;

	while (top != NULL) {
		temp = top;
		top = top->next;
		free(temp);
	}
}

bool is_empty(void)
{
	return top == NULL ? true : false;
}

bool push(int i)
{
	struct node *new;

	new = malloc(sizeof(struct node));
	if (new == NULL) {
		printf("Error: malloc failed in push\n");
		return false;
	}
	new->value = i;
	new->next = top;
	top = new;
	return true;
}

int pop(void)
{
	struct node *temp;
	int result = top->value;

	if (is_empty()) {
		printf("Stack underflow.\n");
		exit(EXIT_FAILURE);
	}
	temp = top;
	top = top->next;

	return result;
}
