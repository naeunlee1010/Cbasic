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

	//STRing CoPY:문자열을 복사하는 함수
	//strcpy_s(저장할 배열, 저장할 배열 크기, 복사할 배열명 또는 문자열);
	strcpy_s(str2, sizeof(str2), str1);
	puts(str2);
	strcpy_s(str2, sizeof(str2), "banana");//str2="banana" (x)
	strcpy(str2, "banana");
	puts(str2);
	return 0;
}