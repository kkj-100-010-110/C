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
struct node *find_last(struct node *list, int n); // exercises 12
struct node *insert_into_ordered_list(struct node *list, struct node *new_node); // exercises 13

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
	struct node *n1 = malloc(sizeof(struct node));;
	if (n1 == NULL)
		exit(EXIT_FAILURE);
	n1->value = 5;
	n1->next = NULL;
	struct node *n2 = malloc(sizeof(struct node));;
	if (n2 == NULL)
		exit(EXIT_FAILURE);
	n2->value = 9;
	n2->next = NULL;
	struct node *n3 = malloc(sizeof(struct node));;
	if (n3 == NULL)
		exit(EXIT_FAILURE);
	n3->value = 2;
	n3->next = NULL;
	struct node *n4 = malloc(sizeof(struct node));;
	if (n4 == NULL)
		exit(EXIT_FAILURE);
	n4->value = 4;
	n4->next = NULL;
	struct node *n5 = malloc(sizeof(struct node));;
	if (n5 == NULL)
		exit(EXIT_FAILURE);
	n5->value = 10;
	n5->next = NULL;


	printf("start work\n");
	first = insert_into_ordered_list(first, n1);
	first = insert_into_ordered_list(first, n2);
	first = insert_into_ordered_list(first, n3);
	first = insert_into_ordered_list(first, n4);
	first = insert_into_ordered_list(first, n5);
//	first = read_number();
//
//	for (struct node *p = first; p != NULL; p = p->next)
//		printf("%d ", p->value);
//	printf("\n\n");
//
//	delete_from_list(first, 10);
//	delete_from_list(first, 9);
//
//	printf("count occurrences: %d\n\n", count_occurrences(first, 5));
//	printf("the last node containing the value: %d, %p\n",
//			find_last(first, 5)->value, find_last(first, 5));
//	printf("the next of the last node containing the value: %d, %p\n\n",
//			find_last(first, 5)->next->value, find_last(first, 5)->next);
//
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

// exercises 12
struct node *find_last(struct node *list, int n)
{
	struct node *temp = NULL;

	while (list != NULL) {
		if (list->value == n)
			temp = list;
		list = list->next;
	}
	return temp;
}

// exercises 13
struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
	struct node *cur = list, *prev = NULL;

	while (cur != NULL && cur->value <= new_node->value) {
		prev = cur;
		cur = cur->next;
	}
	if (prev == NULL) {
		new_node->next = cur;
		list = new_node;
	} else {
		new_node->next = cur;
		prev->next = new_node;
	}

	return list;
}
