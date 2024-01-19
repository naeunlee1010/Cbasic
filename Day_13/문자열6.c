#include <stdio.h>
#include<string.h>
//strlen 문자열 길이
//strcpy 복사 (=대신)
//strcat 결합 (+대신)
//strcmp 비교 (== > < 대신)


int main() {

	int a = strcmp("apple", "banana");
	printf("%d\n", a);

	char str[100] = "apple";
	//문자열 비교할 때는 == 쓰면 안 됨 
	if (str == "apple") printf("같음"); //숫자 비교할 때만 == 씀 주소가 다르니까 다름 나옴
	else puts("다름");

	//문자열 비교할 때는 strcmp를 사용해야 함
	if (strcmp(str, "apple") == 0) printf("same");
	else puts("different");

	//STRinf CoMPare -> 문자열을 비교하는 함수
	//strcmp(문자열1,문자열2)

	printf("%d\n", strcmp("apple", "banana")); //-1 사전 순서로 <면
	printf("%d\n", strcmp("banana", "banana"));//0 사전 순서로 =면
	printf("%d\n", strcmp("banana", "apple"));//1 사전 순서로 >면
	return 0;
}