#include <stdio.h>//����¿� ���õ� �Լ����� ���ǵ� �������
#include<string.h>//���ڿ��� ���õ� �Լ����� ���ǵ� �������

int main() {
	char str[100] = "apple";
	//strlen(�迭 �Ǵ� ���ڿ�) -> ���ڿ��� ����(���ڼ�)�� int������ ����
	int count = 0;
	int count = strlen(str);

	for (int i = 0; i < sizeof(str); i++) {
		count++;
		if (str[i] == '\n')break;
	}
	printf("%d����\n", count);

}