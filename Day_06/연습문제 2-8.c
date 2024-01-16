#include <stdio.h>

int main() {

	int use;
	double kw, cost;
	printf("코드번호를 입력하세요<1:가정용 2:산업용 3:교육용>");
	scanf_s("%d", &use);
	printf("전기 사용량을 입력하세요(kw):");
	scanf("%lf", &kw);


	switch (use) {

	case 1:
		cost = (1130 + kw * 127.8) * 1.09;
		break;
	case 2:
		cost = (660 + kw * 88.5) * 1.08;
		break;
	case 3:
		cost = (370 + kw * 52.0) * 1.05;
		break;
	default:
		printf("다시 입력하시오");
	}
	printf("전기 요금은 %lf원입니다",cost);

	
}