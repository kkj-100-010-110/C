float compute_GPA(char grades[], int n);

float compute_GPA(char grades[], int n)
{
	int i; 
	double avg = 0;

	for (i = 0; i < n; i++) {
		switch (toupper(grades[i])) {
			case 'A': avg += 4; break;
			case 'B': avg += 3; break;
			case 'C': avg += 2; break;
			case 'D': avg += 1; break;
			case 'F': avg += 0; break;
		}
	}

	return avg / n;
}
