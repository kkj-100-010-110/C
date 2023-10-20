#include "stack.h"
#include <stdio.h>

int main(void)
{
	Stack s1, s2;

	make_empty(&s1);
	make_empty(&s2);
	push(&s1, 1);
	push(&s2, 2);

	if (!is_empty(&s1))
		printf("%d\n", pop(&s1));

	return 0;
}
