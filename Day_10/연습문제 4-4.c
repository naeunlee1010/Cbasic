#include<stdio.h>

int main() {

	printf("### �µ���ȯ ###\n");
	printf("1) ���� �Է�");
	printf("2) ȭ�� �Է�\n\n");
	printf("�޴� ����:");
	scanf_s("%d", &choice);

	printf("��ȯ�� ȭ��:%d",fah);

	return 0;

}

int Fahrenheit(int far,int cel) {
	far = 1.8 * cel + 32;
	return far;
}

int Celsius(int far,int cel) {
	cel = (far - 32) / 1.8;
	return cel;
}