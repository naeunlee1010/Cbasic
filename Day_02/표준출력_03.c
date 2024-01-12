#include <stdio.h>

int main() {


	printf("%d\n", 5); 
	printf("%3d\n", 5); //3칸 확보
	printf("%5d\n", 5); //5칸 확보
	printf("%05d\n", 5); //5칸 확보 후 빈칸은 0으로 채움
	printf("%+05d\n", 5);//+-부호추가

	printf("%f\n", 0.12345);
	printf("%.10f\n", 0.12345); //%.정수f:소수점 자리수를 지정
	printf("%.1f\n", 0.12345);
	printf("%.2f\n", 0.126);//빈올림 한 값이 출력

	return 0;
}