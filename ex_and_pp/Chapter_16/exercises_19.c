#include <stdio.h>

struct pinball_machine {
	char name[40];
	int year;
	enum { EM, SS } type;
	int players;
};

int main()
{
	struct pinball_machine m1 = { "test1", 2020, EM, 4 };
	struct pinball_machine m2 = { "test2", 2010, SS, 2 };

	printf("name: %s, year: %d, type: %d, players: %d\n", m1.name, m1.year, m1.type, m1.players);
	printf("name: %s, year: %d, type: %d, players: %d\n", m2.name, m2.year, m2.type, m2.players);

	return 0;
}
