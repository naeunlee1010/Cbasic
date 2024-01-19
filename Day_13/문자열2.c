#include<stdio.h>
//c문자열의 특징
//문자열의 끝을 펴시하기 위해 제일 뒤에 '\0'(null)문자 포함

int main() {

	char str[10] = "apple";
	printf("%d %c\n", str[0], str[0]);
	printf("%d %c\n", str[1], str[1]);
	printf("%d %c\n", str[2], str[2]);
	printf("%d %c\n", str[3], str[3]);
	printf("%d %c\n", str[4], str[4]);

	//문자열 출력
	printf("%s\n", str);
	puts(str);
	puts("apple");
	puts("");

	//분자열 입력
	char str2[100] = "가"; //한글은 1글자 당 2바이트
	printf("%d바이트\n", sizeof("가"));//3바이트
	printf("%d바이트\n", sizeof("가"));//5바이트

	char str2[100];//입력받기 위한 배열의 크기는 충분히 크게 지정하는 것이 좋음
	//줄 단위로 입력, '\n'이전까지 입력됨
	gets_s(str2, sizeof(str2));
	puts(str2);

	//단어 단위로 입력, ' '나 '\n'이전까지 입력됨
	scanf_s("%s", &str2, sizeof(str2));
	puts(str2);
}