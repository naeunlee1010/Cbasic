#include<stdio.h>

int main() {
	//for���� ()�ȿ��� ������ Ÿ���� ������ ���� �� �ʱ�ȭ ����
	//�������� ���� �� ����ϴ� �͵� ����
	for (int a = 0, b = 10,c=0; a < 10; a++, b--,c+=2) {
		printf("a=%d, b=%d,c+%d\n", a, b, c);
	}
	return 0;
}