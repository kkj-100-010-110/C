#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct node
{
	int value;
	struct node *next;
};

void make_empty(void);
bool is_empty(void);
//int is_full(void);
bool push(int i);
int pop(void);

#endif
