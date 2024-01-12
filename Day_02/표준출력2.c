//서식문자의 종류
//정수: %d, %o, %x
//%d:10진수로 바꿔서 출력
//%o:8진수로 바꿔서 출력
//%x:16진수로 바꿔서 출력
//실수: %f %lf
//문자 %c
//문자열 %s
// 16진수 1 2 3 4 5 6 7 8 9 a b c d e f
#include <stdio.h>

int main() {
	printf("%d %o %x\n",10,10,10);
	printf("%f %lf\n", 3.14, 3.142534);
	printf("%c %s\n", 'a',"apple");


	return 0;
}
