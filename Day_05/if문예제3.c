#include <stdio.h>

int main() {

	double score;
	char grade;

	printf("Á¡¼ö>>");
	scanf_s("%lf", &score);
	if (score >= 4.0)
		grade = "A";
	else if (score >= 3.0)
		grade = "B";
	else if (score >= 2.0)
		grade = "C";
	else if (score >= 1.0)
		grade = "D";
	else
		grade = "F";
	printf(grade);

	return 0;
}