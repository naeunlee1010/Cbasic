#include <stdio.h>

int main() {
	//연습문제 2-5


	int std = 0, money = 0;
	scanf_s("%d", &std);

	switch (std) {

	case 1:
		money = 100 + 30;
		printf("등록금은 %d만원입니다", money);
		break;
	case 2: case 3:
		money = 100;
		printf("등록금은 %d만원입니다", money);
		break;
	case 4:
		money = 100 + 10;
		printf("등록금은 %d만원입니다", money);
		break;
	default:
		printf("학년을 잘못 입력하였습니다");
		return 0;
	}

	switch (std) {
	case 1: money = 130; break;
	case 2: case 3: money = 130; break;
	case 4: money = 130; break;
	default:
		printf("학년 잘못 입력");
	}

	printf("등록금은 %d만원");
	return 0; //함수 종료
	
}