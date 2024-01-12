#include<stdio.h>

int main() {



	int a = 0;
	for (int b = 0; b < 5; b++) { // ()안에서 선언한 변수, 초기화가 1회 
		int c = 0; //{}안에서 선언한 변수, 반복해서 0으로 초기화 됨
		//b,c는 {}안에서만 사용 가능
		a++; b++; c++;
		printf("a=%d,b=%d,c=%d\n", a, b, c);
	}
	a = 10; //for문이 끝나도 유지됨
	//b = 10; (x)

	return 0;
}