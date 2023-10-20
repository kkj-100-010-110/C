#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line.h"

#define MAX_LINE_LEN 60
#define MAX_WORD_LEN 20

struct node {
	char word[MAX_WORD_LEN + 1];
	struct node *next;
};

struct node *line = NULL;
int line_len = 0;
int num_words = 0;

void clear_line(void)
{
	struct node *p;
	struct node *temp;

	for (p = line; p != NULL;) {
		temp = p;
		p = p->next;
		free(temp);
	}
	line = NULL;
	line_len = 0;
	num_words = 0;
}

void add_word(const char *word)
{
	struct node **p = &line;
	struct node *new;
	new = malloc(sizeof(struct node));
	if (new == NULL) {
		printf("Error: malloc failed in add_word\n");
		exit(EXIT_FAILURE);
	}
	if (num_words > 0) {
		new->word[0] = ' ';
		line_len++;
		strcpy(&new->word[1], word);
	} else
		strcpy(new->word, word);
	new->next = NULL;
	while (*p != NULL) // add back to list
		p = &(*p)->next;
	*p = new;
	line_len += strlen(new->word);
	num_words++;
}

int space_remaining(void)
{
	return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
	int extra_spaces, spaces_to_insert, i, j;
	struct node *p;

	extra_spaces = MAX_LINE_LEN - line_len;
	for (p = line; p != NULL; p = p->next) {
		for (i = 0; i < strlen(p->word); i++) {
			if (p->word[i] != ' ')
				putchar(p->word[i]);
			else {
				spaces_to_insert = extra_spaces / (num_words - 1);
				for (j = 1; j <= spaces_to_insert + 1; j++)
					putchar(' ');
				extra_spaces -= spaces_to_insert;
				num_words--;
			}
		}
	}
	putchar('\n');
}

void flush_line(void)
{
	if (line_len > 0)
	{
		struct node *p;

		// puts not suitable for list
		for (p = line; p != NULL; p = p->next)
			printf("%s", p->word);
		printf("\n");
	}
}
