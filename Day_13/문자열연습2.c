#include <stdio.h>

int main() {
	char str1[100] = "";
	char str2[100] = "";
	printf("����:");

	scanf_s("%s %s", str1, sizeof(str1),str2, sizeof(str2));
	//scanf_s("%s", &str1, 10); //&: ������ ���� ���� �迭�� ���� ���µ� ���ڿ��� �迭�̴ϱ� &���� �ȵ�
	scanf_s("%s", str2, 10);

	puts(str1); puts(str2);
}