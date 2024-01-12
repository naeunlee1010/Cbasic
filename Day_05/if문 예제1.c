#include <stdio.h>

int main() {
	int num1, num2;
	printf("숫자 두개 입력:\n");
	scanf_s("%d"",""%d",&num1,&num2);

	if (num1 > num2)
		printf("최대값은 %d입니다", num1);

	else
		printf("최대값은 %d입니다", num2);

	return 0;
}