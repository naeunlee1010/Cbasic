#include <stdio.h>
int main() {



	int a = 0;
	scanf_s("%d", &a);
	//switch문은 점프문의 일종
	//switch문의 ()안의 변수의 값에 해당하는 case레이븕로 이동
	//break와 함께 사용하면 분기문처럼 사용할 수 있음

	switch (a) {
		//값: -> 레이블
	case 1: case 2: case 3: //case 레이블은 여러개를 작성해도 됨
		printf("일\n");
		break; //break문 = {}에서 탈출하는 역할

	case 4: // case 4,5,6: (x)
		printf("이\n");
		break;
	case 5:
		printf("삼\n");
		break;

	default://기본 레이블 -> 해당하는 레이블 없는 경우 이동되는 레이블,
			//else와 유사한 기능, 생략 가능
		printf("그밖에\n");
	}
}