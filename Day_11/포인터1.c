//������
//������Ÿ�Ժ��� int* double*
//������ ������ *a

#include <stdio.h>

int main() {

	//�Ϲ� ���� -> ���� ����
	int a = 0;
	//������Ÿ�� ���� -> �Ϲ� ������ �ּҸ� ����
	int* pa = &a;

	printf("%p\n", pa);

	return 0;
}