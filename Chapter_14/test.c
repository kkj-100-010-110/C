#include <stdio.h>

#define ECHO(s)			\
		do {			\
			gets(s);	\
			puts(s);	\
		} while (0)
#undef ECHO

int main(void)
{
	char str[100];
	int echo_flag = 1;

	//if (echo_flag)
	//	ECHO(str);
	//else
	//	gets(str);

	printf("Wacky Windows (c) 2010 Wacky Software, Inc.\n");
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	return 0;
}
