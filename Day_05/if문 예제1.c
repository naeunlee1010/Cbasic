#include <stdio.h>

int main() {
	int num1, num2;
	printf("���� �ΰ� �Է�:\n");
	scanf_s("%d"",""%d",&num1,&num2);

	if (num1 > num2)
		printf("�ִ밪�� %d�Դϴ�", num1);

	else
		printf("�ִ밪�� %d�Դϴ�", num2);

	return 0;
}