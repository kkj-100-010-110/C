#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NAME_LEN 25

struct part
{
	int number;
	char name[NAME_LEN + 1];
	int on_hand;
};

// exercises 18
// ascending
int compare_parts(const void *p, const void *q)
{
	return ((struct part *) p)->number - ((struct part *)q)->number;
}
// descending
int compare_parts_de(const void *p, const void *q)
{
	return ((struct part *) q)->number - ((struct part *)p)->number;
}

void make_test_case(struct part inventory[]);

int main()
{
	struct part inventory[20];

	make_test_case(inventory);

	for (int i = 0; i < 20; i++)
		printf("number: %d, name: %s, on hand: %d\n",
				inventory[i].number, inventory[i].name, inventory[i].on_hand);
	printf("\n");

	qsort(inventory, 20, sizeof(struct part), compare_parts_de);

	for (int i = 0; i < 20; i++)
		printf("number: %d, name: %s, on hand: %d\n",
				inventory[i].number, inventory[i].name, inventory[i].on_hand);
	printf("\n");

	return 0;
}

void make_test_case(struct part inventory[])
{
	srand(time(0));
	for (int i = 0; i < 20; i++) {
		inventory[i].number = rand() % 100;
		inventory[i].name[0] = i + 'a';
		inventory[i].name[1] = '\0';
		inventory[i].on_hand = 10;
	}
}
