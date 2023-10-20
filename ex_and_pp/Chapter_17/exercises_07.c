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
void delete_list(struct node *first);

int main()
{
	struct node *first = NULL;

	first = read_number();

	for (struct node *p = first; p != NULL; p = p->next)
		printf("%d ", p->value);
	printf("\n");

	delete_from_list(first, 10);
	delete_from_list(first, 9);

	for (struct node *p = first; p != NULL; p = p->next)
		printf("%d ", p->value);
	printf("\n");

	delete_list(first);

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

// exersises 7
// why is it incorrect?
// it lost link when free p, which means it cannot access the next node
//void delete_list(struct node *first)
//{
//	struct node *p;
//
//	for (p = first; p != NULL; p = p->next)
//		free(p);
//}
// to solve this, make two pointer variables, one is the head, whose connect the other one's next node.
// the other one is freed & has the address of the next node.
// at the last, remove the head.
void delete_list(struct node *first)
{
	struct node *p = first->next;
	struct node *q = first;

	for (p = first->next; p != NULL; p = q->next) {
		q->next = p->next;
		free(p);
	}
	free(first);
}
// the book's solution
void delete_list(struct node *first)
{
	struct node *p = first;
	struct node *temp = first;

	while (p != NULL) {
		temp = p;
		p = p->next;
		free(temp);
	}
}
