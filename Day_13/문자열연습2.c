#include <stdio.h>

int main() {
	char str1[100] = "";
	char str2[100] = "";
	printf("과일:");

	scanf_s("%s %s", str1, sizeof(str1),str2, sizeof(str2));
	//scanf_s("%s", &str1, 10); //&: 변수일 때는 쓰고 배열일 때는 쓰는데 문자열을 배열이니까 &쓰면 안됨
	scanf_s("%s", str2, 10);

	puts(str1); puts(str2);
}