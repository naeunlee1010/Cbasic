#include <stdio.h>

int main() {
	int num;
	int i = 1;

	printf("한 개의 단을 입력하세요:");
	scanf_s("%d",&num);

	while (i<10) {
		printf("%d * %d =%d\n", num, i,num*i);
		i++;
	}

	return 0;
}