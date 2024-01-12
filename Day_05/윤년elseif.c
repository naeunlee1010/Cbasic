#include <stdio.h>

int main() {
	int year;
	scanf_s("%d", &year);

	if (year % 4 == 0 && year %100 != 0)
		printf("しい");
	else if (year % 400 != 0 && year % 100 == 0)
		printf("そい");
	else if (year % 400 == 0)
		printf("しい");
	else
		printf("そい");

	if () printf("しい\n");
	else printf("そい")

	return 0;
}