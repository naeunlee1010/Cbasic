#pragma warning(disable"4996")
#include <stdio.h>
#include<string.h>

int main() {

	char str1[100] = "apple";
	char str2[100] = "orange";


	//str1 = str1 +"banana" (x)
	//STRing conCATenate ->���ڿ� �����ϴ� �Լ�
	//strcat_s(����迭,�迭ũ��, ������ ���ڿ� �Ǵ� �迭)
	strcat_s(str1, sizeof(str1), "banana");
	puts(str1);
	strcat_s(str2, sizeof(str2), "banana");
	puts(str2);

	return 0;
}