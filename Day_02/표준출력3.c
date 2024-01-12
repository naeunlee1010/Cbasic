//상수(constant):변하지 않는 값
//리터럴 상수-> 1 2 10 3.14
//심볼릭 상수
#include <stdio.h>

int main() {

	printf("%d\n", 10); //컴파일러는 숫자를 기본적으로 10진수로 처리
	printf("%d\n", 010); //숫자 앞에 0을 붙이면 8진수로 처리
	printf("%d\n", 0x10); //숫자 앞에 0x을 붙이면 16진수로 처리
	printf("%d\n", 0b10); //숫자 앞에 0b을 붙이면 2진수로 처리
	
	//실수는 float타입 실수 >소수점 이하 7자리
	//double 타입 실수 > 소수점 이하 15자리
	printf("%f\n",123.45f,123.45F); //float타입 실수는 뒤에 f나 F 붙임
	printf("%lf\n",123.45);//컴파일러는 실수를 기본적으로 double 타입으로 처리
	printf("%e\n",123.45);//지수식 표현

	printf("%c\n", 'b'); //'알파벳'->문자상수
	printf("%c\n", '\0'); //null문자, ''->x
	printf("%c\n", ' '); //공백
	printf("%s\n", "banana");//""안에 있으면 문자열 상수
	printf("%s\n", "");//빈문자열


	return 0;
}