
#include<stdio.h>

int main() {
	int i, j, num;
	printf("1~9 ������ ������ �Է��Ͻÿ�:");
	scanf_s("%d\n", &num);


	for (j = 1; j <= num; j++) {
		for (i = 0; i < j; i++)
			printf("%d", num);
	}
	return 0;

}
