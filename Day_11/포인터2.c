//�������� ���
//   1)�ٸ� �Լ��� ������ ���� ����

#include <stdio.h>
void funcA(int* a) {
	*a = 20;

	//*������ -> �ּҿ� ����� ��
}

int main() {

	int a = 10;

	funcA(&a);
	printf("a = %d\n", a);

	return 0;
}