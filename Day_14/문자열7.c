//문자열 관련 함수
//입력 출력gets_s,puts
//길이 strlen
//복사 strcpy     글자 수 지정:strncpy
//합치기 strcat   글자 수 지정:strncat
//비교 strcmp     글자 수 지정:strncmp

#include <stdio.h>
#include <string.h>

int main() {

	char str1[100] = "";
	char str2[100] = "banana";
	strncpy_s(str1, 100, "banana",3);
	//strncpy_s(저장할 배열, 배열의크기, 복사할 문자열, 글자수)
	//strncpy(저장할 배열, 복사할 문자열, 글자수)
	strncpy_s(str1, 100, str2 + 2, 3);
	puts(str1);

	strncat_s(str1, 100, "orange", 4);
	//strncat_s(저장할 배열,배열의크기, 결합할 문자열, 글자수)
	puts(str1);

	printf("%d\n", strncmp("banana", "band", 3)); //3글자만 비교하겠다
	//strcmp(문자열1,문자열2,글자수)

	return 0;
}
