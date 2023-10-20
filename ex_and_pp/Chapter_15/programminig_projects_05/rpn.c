/* RPN calculator with stack */
#include "stack.h"

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
