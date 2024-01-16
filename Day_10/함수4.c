#include<stdio.h>

//함수를 정의하는 방법1: 호출 전에 선언하고 정의
int funcA(int a) {
	return a + 1;
}

//함수를 정의하는 방법2:함수의 prototype(원형) 선언 후 나중에 정의
int funcB(int,double); //함수의 원형: 리턴타입과 매개변수타입 이름 정도만 선언


int main() {

	int a = funcA(1);
	int b = funcB(2,2.5);

	return 0;
}
int funcB(int a, double b) {
	return a + (int)b;
}