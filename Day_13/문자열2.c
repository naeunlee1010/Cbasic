#include<stdio.h>
//c���ڿ��� Ư¡
//���ڿ��� ���� ����ϱ� ���� ���� �ڿ� '\0'(null)���� ����

int main() {

	char str[10] = "apple";
	printf("%d %c\n", str[0], str[0]);
	printf("%d %c\n", str[1], str[1]);
	printf("%d %c\n", str[2], str[2]);
	printf("%d %c\n", str[3], str[3]);
	printf("%d %c\n", str[4], str[4]);

	//���ڿ� ���
	printf("%s\n", str);
	puts(str);
	puts("apple");
	puts("");

	//���ڿ� �Է�
	char str2[100] = "��"; //�ѱ��� 1���� �� 2����Ʈ
	printf("%d����Ʈ\n", sizeof("��"));//3����Ʈ
	printf("%d����Ʈ\n", sizeof("��"));//5����Ʈ

	char str2[100];//�Է¹ޱ� ���� �迭�� ũ��� ����� ũ�� �����ϴ� ���� ����
	//�� ������ �Է�, '\n'�������� �Էµ�
	gets_s(str2, sizeof(str2));
	puts(str2);

	//�ܾ� ������ �Է�, ' '�� '\n'�������� �Էµ�
	scanf_s("%s", &str2, sizeof(str2));
	puts(str2);
}