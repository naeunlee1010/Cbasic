#include <stdio.h>

int main() {


	double num;

	printf("숫자 입력:\n");
	scanf_s("%lf", &num);

	if (sizeof(num) == 4)   //if( num == (int)num)
		printf("%lf는 정수입니다", num);

	else
		printf("%lf는 실수입니다", num);
}

	return 0;