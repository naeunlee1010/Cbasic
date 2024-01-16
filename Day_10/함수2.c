#include<stdio.h>
    //매개변수():함수 외부의 값을 내부로 전달
//return 타입 함수이름(매개변수) {몸체}
int funcA(int a, int b) { //함수를 정의(define)
	printf("함수 A\n");//함수의 {}:함수의 body(몸체)
	return a + b;
	//return ->함수를 종료하는 예약어
	//a+b-> return value(반환값):함수가 종료하면서 남기는 값
}

int main() {
	int a = funcA(10, 11); //함수를 호출(call)
		//함수명(인수1,인자2)
 //인수(arguments) ->함수의 ()안 들어가는 값
	printf("%d", a);
	return 0;
}