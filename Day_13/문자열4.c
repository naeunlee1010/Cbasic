#pragma waring(disable:4996)
#include <stdio.h>
#include<string.h>

int main() {

	char str1[100] = "apple";
	//str1 = "banana"(x)
	char str2[100] = "";
	//str2 = str1(x)
	/*for (int i = 0; i < sizeof(str1); i++) {
		str2[i] = str1[i];
	}
	puts(str2);*/

	//STRing CoPY:���ڿ��� �����ϴ� �Լ�
	//strcpy_s(������ �迭, ������ �迭 ũ��, ������ �迭�� �Ǵ� ���ڿ�);
	strcpy_s(str2, sizeof(str2), str1);
	puts(str2);
	strcpy_s(str2, sizeof(str2), "banana");//str2="banana" (x)
	strcpy(str2, "banana");
	puts(str2);
	return 0;
}