#include <stdio.h>

int main() {
	//�������� 2-5


	int std = 0, money = 0;
	scanf_s("%d", &std);

	switch (std) {

	case 1:
		money = 100 + 30;
		printf("��ϱ��� %d�����Դϴ�", money);
		break;
	case 2: case 3:
		money = 100;
		printf("��ϱ��� %d�����Դϴ�", money);
		break;
	case 4:
		money = 100 + 10;
		printf("��ϱ��� %d�����Դϴ�", money);
		break;
	default:
		printf("�г��� �߸� �Է��Ͽ����ϴ�");
		return 0;
	}

	switch (std) {
	case 1: money = 130; break;
	case 2: case 3: money = 130; break;
	case 4: money = 130; break;
	default:
		printf("�г� �߸� �Է�");
	}

	printf("��ϱ��� %d����");
	return 0; //�Լ� ����
	
}