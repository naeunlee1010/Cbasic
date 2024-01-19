#pragma warning(disable"4996")
#include <stdio.h>
#include<string.h>

int main() {

	char str1[100] = "apple";
	char str2[100] = "orange";


	//str1 = str1 +"banana" (x)
	//STRing conCATenate ->문자열 결합하는 함수
	//strcat_s(저장배열,배열크기, 덧붙일 문자열 또는 배열)
	strcat_s(str1, sizeof(str1), "banana");
	puts(str1);
	strcat_s(str2, sizeof(str2), "banana");
	puts(str2);

	return 0;
}