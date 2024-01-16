//함수(function): c언어 코드의 기본 단위
//      ->자주 사용하는 코드를 간추려 놓은 것 -> 재사용 위해
//      ->프로시저(procedure)와 비슷한 개념
//      ->절차지향언어

#include<stdio.h>

void date1() {
	printf("밥먹고");
	printf("영화보고");
	printf("차마시고\n");
}

void date2() {
	printf("영화보고");
	printf("차마시고");
	printf("밥먹고\n");
}

void date3() {
	printf("차마시고");
	printf("밥먹고");
	printf("영화보고\n");
}

int main() {

	/*printf("밥먹고");
	printf("영화보고");
	printf("차마시고\n");

	printf("밥먹고");
	printf("영화보고");
	printf("차마시고\n");

	printf("밥먹고");
	printf("영화보고");
	printf("차마시고\n");*/

	date1();
	return 0;
}