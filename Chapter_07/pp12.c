#include <stdio.h>

int main(void)
{
	float operand1, operand2, operand3, result = 0.0f;
	char ch, operator1, operator2;

	printf("Enter an expression: ");
	scanf("%f%c%f%c%f", &operand1, &operator1, &operand2, &operator2, &operand3);

	switch (operator1) {
		case '+':
			result += operand1 + operand2;
			break;
		case '-':
			result += operand1 - operand2;
			break;
		case '*':
			result += operand1 * operand2;
			break;
		case '/':
			result += operand1 / operand2;
			break;
	}
	switch (operator2) {
		case '+':
			result += operand3;
			break;
		case '-':
			result -= operand3;
			break;
		case '*':
			result *= operand3;
			break;
		case '/':
			result /= operand3;
			break;
	}

	printf("Value of expression: %.1f\n", result);

	return 0;
}
