//포인터
//포인터타입변수 int* double*
//포인터 연산자 *a

#include <stdio.h>

int main() {

	//일반 변수 -> 값을 저장
	int a = 0;
	//포인터타입 변수 -> 일반 변수에 주소를 저장
	int* pa = &a;

	printf("%p\n", pa);

	return 0;
}