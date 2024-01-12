//모두 선택 단축키 ctr + a
//자동 주석 단축키 ctr + 
#include <stdio.h>


int main() {

	int num;

	int a, b, max;

	printf("정수입력:");
	scanf_s("%d%d%d%d", &a, &b,&c,&d);
	max = a;
	max = max > b ? b : max;
	max = max > c ? c : max;
	max = max > d ? d : max;

	printf("최대값은 %d\n", max);

	return 0;
}