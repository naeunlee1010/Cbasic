#include <stdio.h>

int main() {
	int year;
	scanf_s("%d", &year);

	if (year % 4 == 0 && year %100 != 0)
		printf("����");
	else if (year % 400 != 0 && year % 100 == 0)
		printf("����");
	else if (year % 400 == 0)
		printf("����");
	else
		printf("����");

	if () printf("����\n");
	else printf("����")

	return 0;
}