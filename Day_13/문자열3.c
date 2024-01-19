#include <stdio.h>//입출력에 관련된 함수들이 정의된 헤더파일
#include<string.h>//문자열에 관련된 함수들이 정의된 헤더파일

int main() {
	char str[100] = "apple";
	//strlen(배열 또는 문자열) -> 문자열의 길이(글자수)를 int형으로 리턴
	int count = 0;
	int count = strlen(str);

	for (int i = 0; i < sizeof(str); i++) {
		count++;
		if (str[i] == '\n')break;
	}
	printf("%d글자\n", count);

}