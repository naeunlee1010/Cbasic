#include<stdio.h>

int main() {
	//break ->�ݺ��� �ߴ�
	//continue ->�ݺ��� ���������� �ڿ� ���� �ڵ尡 ������
	for (int i = 0; i < 10; i++) {
		if (i == 5) break;
		printf("%d\n", i);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		if (i == 5) continue;
		printf("%d\n", i);
	}
	return 0;
}