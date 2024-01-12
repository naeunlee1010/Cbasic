#include <stdio.h>

int main() {
	//변수의 이름을 identifier(식별자)
	
	//변수의 이름으로 할 수 없는 것들
	int a;
	//int a; (x) 한 코드 블럭 안에 동일한 이름의 변수가 있으면 안 됨 
	int a1, a2a; //숫자 포함 가능, 제일 처음에 오는 건 안 됨
	//int 1a; (x)  
	//int a ? ; _,$ 제외한 특수문자 포함 안 됨
	int a_$; 
	//int return; (x) 이미 사용 중인 예약어 안 됨


	return 0;
}