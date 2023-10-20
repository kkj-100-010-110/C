#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

#define STACK_SIZE 5
#define EXPRESSION_SIZE 50

int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int read_line(char *str, int n);
int evaluate_RPN_expression(const char *expression);

int main(void)
{
	char expression[EXPRESSION_SIZE];

	while (1) {
		printf("Enter an RPN expression: ");
		if (read_line(expression, EXPRESSION_SIZE)) {
			printf("Value of pexpression: %d\n", evaluate_RPN_expression(expression));
			for (int i = 0; i < STACK_SIZE; i++)
				contents[i] = 0;
			make_empty();
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

int read_line(char *str, int n)
{
	char ch;
	int i = 0;

	while ((ch = getchar()) != '\n') {
		if (i < n) {
			if ((ch >= 42 && ch <= 43) || (ch == 45 || ch == 61) || (ch >= 47 && ch <=57) || isspace(ch))
				str[i++] = ch;
			else
				return 0;
		}
	}
	str[i] = '\0';

	return 1;
}

int evaluate_RPN_expression(const char *expression)
{
	int value = 0;

	while (*expression != '\0') {
		if (*expression >= 48 && *expression <= 57) {
			value = *expression - 48;
			push(value);
		}
		else if (*expression == 42) {
			value = pop();
			value = pop() * value;
			push(value);
		}
		else if (*expression == 43) {
			value = pop();
			value = pop() + value;
			push(value);
		}
		else if (*expression == 45) {
			value = pop();
			value = pop() - value;
			push(value);
		}
		else if (*expression == 47) {
			value = pop();
			value = pop() / value;
			push(value);
		}
		else if (*expression == 61) {
			value = pop();
			break;
		}
		expression++;
	}
	return value;
}
