//���ڿ� ���� �Լ�
//�Է� ���gets_s,puts
//���� strlen
//���� strcpy     ���� �� ����:strncpy
//��ġ�� strcat   ���� �� ����:strncat
//�� strcmp     ���� �� ����:strncmp

#include <stdio.h>
#include <string.h>

int main() {

	char str1[100] = "";
	char str2[100] = "banana";
	strncpy_s(str1, 100, "banana",3);
	//strncpy_s(������ �迭, �迭��ũ��, ������ ���ڿ�, ���ڼ�)
	//strncpy(������ �迭, ������ ���ڿ�, ���ڼ�)
	strncpy_s(str1, 100, str2 + 2, 3);
	puts(str1);

	strncat_s(str1, 100, "orange", 4);
	//strncat_s(������ �迭,�迭��ũ��, ������ ���ڿ�, ���ڼ�)
	puts(str1);

	printf("%d\n", strncmp("banana", "band", 3)); //3���ڸ� ���ϰڴ�
	//strcmp(���ڿ�1,���ڿ�2,���ڼ�)

	return 0;
}
