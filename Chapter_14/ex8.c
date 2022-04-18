#include <stdio.h>

#define STRINGIZE(x) #x // to convert a macro argument into a string literal.
#define EXPAND(x) STRINGIZE(x) // to run 'x' and turn it into STRINGIZE. 
#define LINE_FILE ("Line " EXPAND(__LINE__) " of file "__FILE__)


int main(void)
{
	const char *str = LINE_FILE;

	printf("%s\n", str);

	return 0;
}
