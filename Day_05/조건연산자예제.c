//��� ���� ����Ű ctr + a
//�ڵ� �ּ� ����Ű ctr + 
#include <stdio.h>


int main() {

	int num;

	int a, b, max;

	printf("�����Է�:");
	scanf_s("%d%d%d%d", &a, &b,&c,&d);
	max = a;
	max = max > b ? b : max;
	max = max > c ? c : max;
	max = max > d ? d : max;

	printf("�ִ밪�� %d\n", max);

	return 0;
}