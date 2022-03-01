#include <stdio.h>

#define STUDENT 5
#define QUIZ 5
#define MAX 100
#define MIN 0

int main(void)
{
	int arr[STUDENT][QUIZ];
	int student_total = 0, quiz_total = 0, max = MIN, min = MAX; 

	for (int i = 0; i < STUDENT; i++) {
		printf("Enter student%d quiz(es) score(s): ", i + 1);
		for (int j = 0; j < QUIZ; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	printf("\n");
	for (int i = 0; i < STUDENT; i++) {
		printf("Student %d ", i + 1);
		for (int j = 0; j < QUIZ; j++) {
			student_total += arr[i][j];
		}
		printf("total score: %d, average score: %d\n", student_total, student_total / QUIZ);
		student_total = 0;
	}

	printf("\n");
	for (int j = 0; j < STUDENT; j++) {
		printf("Quiz %d ", j + 1);
		for (int i = 0; i < QUIZ; i++) {
			quiz_total += arr[i][j];
			if (arr[i][j] > max)
				max = arr[i][j];
			if (arr[i][j] < min)
				min = arr[i][j];
		}
		printf("high score: %d, low score: %d, average score: %d\n", max, min, quiz_total / QUIZ);
		quiz_total = 0;
		max = MIN;
		min = MAX;
	}

	return 0;
}
