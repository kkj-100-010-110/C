#include <stdlib.h>
#include <stdio.h>

struct node {
	int value;			// data stored in the node
	struct node *next;	// pointer to the next node
};

struct node *add_to_list(struct node *list, int n);
struct node *read_number(void);
struct node *search_list(struct node *list, int n);
struct node *delete_from_list(struct node *list, int n);
int count_occurrences(struct node *list, int n); // exercises 11

// pointers to pointers
//void add_to_list(struct node **list, int n)
//{
//	struct node *new_node;
//
//	new_node = malloc(sizeof(struct node));
//	if (new_node == NULL) {
//		printf("Error: malloc failed in add_to_list\n");
//		exit(EXIT_FAILURE);
//	}
//	new_node->value = n;
//	new_node->next = *list;
//	*list = new_node;
//}

int main()
{
	struct node *first = NULL;

	first = read_number();

	for (struct node *p = first; p != NULL; p = p->next)
		printf("%d ", p->value);
	printf("\n\n");

	delete_from_list(first, 10);
	delete_from_list(first, 9);

	printf("count occurrences: %d\n\n", count_occurrences(first, 5));
	for (struct node *p = first; p != NULL; p = p->next)
		printf("%d ", p->value);
	printf("\n");

	return 0;
}

struct node *add_to_list(struct node *list, int n)
{
	struct node *new_node;

	new_node = malloc(sizeof(struct node));
	if (new_node == NULL) {
		printf("Error: malloc failed in add_to_list\n");
		exit(EXIT_FAILURE);
	}
	new_node->value = n;
	new_node->next = list;
	return new_node;
}

struct node *read_number(void)
{
	struct node *first = NULL;
	int n;

	printf("Enter a series of integers (0 to terminate): ");
	for (;;) {
		scanf("%d", &n);
		if (n == 0)
			return first;
		first = add_to_list(first, n);
	}
}

struct node *search_list(struct node *list, int n)
{
	while (list != NULL && list->value != n)
		list = list->next;
	return list;
}

struct node *delete_from_list(struct node *list, int n)
{
	struct node *cur, *prev;

	for (cur = list, prev = NULL;
			cur != NULL && cur->value != n;
			prev = cur, cur = cur->next)
		;
	if (cur == NULL)
		return list;
	if (prev == NULL)
		list = list->next;
	else
		prev->next = cur->next;
	free(cur);
	return list;
}

// exercises 11
int count_occurrences(struct node *list, int n)
{
	int count = 0;

	while (list != NULL) {
		if (list->value == n)
			count++;
		list = list->next;
	}
	return count;
}
