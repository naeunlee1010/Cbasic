//상수=변하지 않는 값
//변수(variable): 메모리 상의 저장공간 (변하는 값 x)
#include <stdio.h>

int main() {

	//저장공간을 확보->변수를 선언
	//12ff8812ff88
	int a = 1; //최초로 변수에 값(상수)을 저장 -> 변수를 초기화(initialize)
	//데이터타입 -> 변수 크기를 지정, 저장되는 상수의 종류 지정
	printf("a = %d\n", a);


	// 데이터타입 변수명;
	a = 2; //a에 2를 대입하겠다
	printf("a = %d\n", a);

	return 0;
}