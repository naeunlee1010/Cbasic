#include<stdio.h>

int main() {
	int count = 0;
	int num;

	while (1) {

		printf("�����Է�:");
		scanf_s("%d", &num);
		if (num < 0) break;
		count++;
		printf("%d ����:%dȸ\n", num, count);

	}
	return 0;
}