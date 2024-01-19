//포인터의 사용
//   1)다른 함수의 변수의 값을 변경

#include <stdio.h>
void funcA(int* a) {
	*a = 20;

	//*연산자 -> 주소에 저장된 값
}

int main() {

	int a = 10;

	funcA(&a);
	printf("a = %d\n", a);

	return 0;
}