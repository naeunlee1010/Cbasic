#include <stdio.h>

int main() {


	int a;
	scanf_s("%d", &a);

	//else if��
	//��ø�� if else ���� ���� �������� �پ��
	//���ǽ� �ݵ�� �ۼ�
	//�ܵ����� ��� �Ұ���
	if (a > 100)
		printf("over100\n");
	else if (a > 0)
		printf("plus\n");
	else if (a == 0)
		printf("zero\n");
	else
		printf("minus");
	return 0;
}