#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 5

int contents[STACK_SIZE];
int top;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
	int value;
	char ch;

	printf("Enter an RPN expression: ");
	while (1) {
		scanf(" %c", &ch);

		if (ch >= 48 && ch <= 57) {
			value = ch - 48;
			push(value);
		}
		else if (ch == 42) {
			value = pop();
			value = pop() * value;
			push(value);
		}
		else if (ch == 43) {
			value = pop();
			value = pop() + value;
			push(value);
		}
		else if (ch == 45) {
			value = pop();
			value = pop() - value;
			push(value);
		}
		else if (ch == 47) {
			value = pop();
			value = pop() / value;
			push(value);
		}
		else if (ch == 61) {
			value = pop();
			printf("Value of pexpression: %d\n", value);
			printf("Enter an RPN expression: ");
		}
		else
			break;
	}

	return 0;

}

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(int i)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

int pop(void)
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}

void stack_overflow(void)
{
	printf("Expression is too complex.\n");
	exit(0);
}

void stack_underflow(void)
{
	printf("Not enough operands in expression.\n");
	exit(0);
}
