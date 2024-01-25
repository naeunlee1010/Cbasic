//변수의 종류
//5) 외부 변수(extern variable)
//extern 수식어가 붙은 변수
//다른 파일에서 선언한 변수를 가져다 쓸 때 사용

#include<stdio.h>

int main() {

	extern int a;
	extern double b;
	extern char c;

	printf("%d\n", a);
	printf("%lf\n", b);
	printf("%c\n", c);


	return 0;
}