#include <stdio.h>

int main() {

	int month = 0;
	scanf_s("%d", &month);

	switch (month) {

	case 1: case 2: case 12:
		printf("�ܿ�");
		break;

	case 3: case 4: case 5:
		printf("��");
		break;

	case 6: case 7: case 8:
		printf("����");
		break;

	case 9: case10: case 11:
		printf("����");

	default:
		printf("1~12�� ������ ���ڰ� �ƴմϴ�.");
	}

	return 0;
}