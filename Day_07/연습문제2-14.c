#include <stdio.h>

int main() {
	int num;
	int remain;//10���� ���� ������

	printf("�������� ��� �� ������ ���Ͻÿ�:");
	scanf_s("%d", &num);
	while (num>0 ) {
		
		remain = num % 10;
		num = num / 10;
		printf("%d", remain);

		//������
		printf("%d", num % 10);
		num /= 10
	}

	return 0;
}