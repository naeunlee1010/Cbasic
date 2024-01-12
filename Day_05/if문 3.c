#include <stdio.h>

int main() {


	int a;
	scanf_s("%d", &a);

	//else if문
	//중첩된 if else 문에 비해 가독성이 뛰어나다
	//조건식 반드시 작성
	//단독으로 사용 불가능
	if (a > 100)
		printf("over100\n");
	else if (a > 0)
		printf("plus\n");
	else if (a == 0)
		printf("zero\n");
	else
		printf("minus");
	return 0;
}