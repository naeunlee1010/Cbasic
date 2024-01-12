#include<stdio.h>

int main() {
	//for문의 ()안에서 동일한 타입의 변수를 여러 개 초기화 가능
	//증감식을 여러 개 사용하는 것도 가능
	for (int a = 0, b = 10,c=0; a < 10; a++, b--,c+=2) {
		printf("a=%d, b=%d,c+%d\n", a, b, c);
	}
	return 0;
}