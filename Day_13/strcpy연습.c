#include <stdio.h>
#include<string.h>

int main() {
	char str1[100] = "apple";
	char str2[100] = "banana";
	//str1과 str2 저장된 문자열을 교환하시오
	char temp[100] = "";


	strcpy_s(temp, sizeof(temp), str2);
	strcpy_s(str2, sizeof(str2), str1);
	strcpy_s(str1, sizeof(str1), temp);
	printf("str1 = %s, str2 = %s\n", str1, str2);
	//str1=banana str2=apple

	return 0;
}