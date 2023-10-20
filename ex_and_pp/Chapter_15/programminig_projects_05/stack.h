/* stack */
#ifndef STACK_H
#define STACK_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define STACK_SIZE 5

int contents[STACK_SIZE];
int top;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

#endif
