#include <stdio.h>
#include<string.h>
//strlen ���ڿ� ����
//strcpy ���� (=���)
//strcat ���� (+���)
//strcmp �� (== > < ���)


int main() {

	int a = strcmp("apple", "banana");
	printf("%d\n", a);

	char str[100] = "apple";
	//���ڿ� ���� ���� == ���� �� �� 
	if (str == "apple") printf("����"); //���� ���� ���� == �� �ּҰ� �ٸ��ϱ� �ٸ� ����
	else puts("�ٸ�");

	//���ڿ� ���� ���� strcmp�� ����ؾ� ��
	if (strcmp(str, "apple") == 0) printf("same");
	else puts("different");

	//STRinf CoMPare -> ���ڿ��� ���ϴ� �Լ�
	//strcmp(���ڿ�1,���ڿ�2)

	printf("%d\n", strcmp("apple", "banana")); //-1 ���� ������ <��
	printf("%d\n", strcmp("banana", "banana"));//0 ���� ������ =��
	printf("%d\n", strcmp("banana", "apple"));//1 ���� ������ >��
	return 0;
}