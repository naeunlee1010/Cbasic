#include <stdio.h>

int main() {

	int month = 0;
	scanf_s("%d", &month);

	switch (month) {

	case 1: case 2: case 12:
		printf("겨울");
		break;

	case 3: case 4: case 5:
		printf("봄");
		break;

	case 6: case 7: case 8:
		printf("여름");
		break;

	case 9: case10: case 11:
		printf("가을");

	default:
		printf("1~12월 사이의 숫자가 아닙니다.");
	}

	return 0;
}