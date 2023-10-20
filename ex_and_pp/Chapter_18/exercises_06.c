#include <stdio.h>

//void print_error(const char *message)
//{
//	int n = 1;
//	printf("Error %d: %s\n", n++, message);
//}

void print_error(const char *message)
{
	static int n = 1;
	printf("Error %d: %s\n", n++, message);
}

int main()
{
	print_error("test1");
	print_error("test2");
	print_error("test3");
	print_error("test4");
	print_error("test5");

	return 0;
}
