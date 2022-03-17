/* Prints a one-month reminder list */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 // maximum number of reminders
#define MSG_LEN 60	  // max length of reminder message

int read_line(char str[], int n);
void skip_line(void);

int main(void)
{
	char reminders[MAX_REMIND][MSG_LEN + 3];
	char day_str[12], msg_str[MSG_LEN + 1];
	int month, day, hour, minute, i, j, num_remind = 0;

	for (;;) {
		if (num_remind == MAX_REMIND) {
			printf("--No space left --\n");
			break;
		}

		printf("Enter month, day, time and reminder (mm/dd hh:mm)");
		printf("\n>> ");
		scanf("%2d/%2d %2d:%2d", &month, &day, &hour, &minute);
		if (month == 0 || day == 0)
			break;
		// (a) (b) (c)
		if (((day < 0 || day > 31) || (month < 0 || month > 12)) ||
			((hour < 0 || hour > 23) || (minute < 0 || minute > 59))) {
			printf("You entered a wrong data.\n");
			skip_line();
			continue;
		}
		sprintf(day_str, "%2d/%2.2d %2.2d:%2.2d", month, day, hour, minute);
		read_line(msg_str, MSG_LEN);

		for (i = 0; i < num_remind; i++)
			if (strcmp(day_str, reminders[i]) < 0)
				break;
		for (j = num_remind; j > i; j--)
			strcpy(reminders[j], reminders[j - 1]);

		strcpy(reminders[i], day_str);
		strcat(reminders[i], msg_str);

		num_remind++;
	}

	printf("\nDay Reminder\n");
	for (i = 0; i < num_remind; i++)
		printf(" %s\n", reminders[i]);

	return 0;
}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}

void skip_line(void)
{
	while (getchar() != '\n')
		;
}
