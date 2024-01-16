//while 문, do~while 문, for 문
#include <stdio.h>

int main() {

	int a = 0, i = 0, j = 0; //반복을 제어할 변수


	//특별히 반복문의 코드블럭(영역)을 loop라고 부름
	//while(조건식) {반복할 코드;증감식;}
	while (i < 10) {
		printf("hello world!\n");
		i++;
	}


	while (j < 10) {
		printf("1");
		j++;
	}

	i = 1;
	while (i <= 10) {
		printf("%d", i);
		i++;
	}

	i = 10;
	while (i < 10) {
		printf("%d", i);
		i--;
	}


	i = 1;
	while (i <= 10) {
		printf("%d", i);
		i += 2;

	a = 1;
	while (a <= 10) {
	if (a % 2 == 0) printf("%d", a);
		a++;
	}

	a = 0;
	while (a < 1000022) {
		printf("%d\n", a);
		a++;
	}

	int sum = 0, a = 0;
	while (a < 10) {
		sum = sum + a;
		a++;
	}
	printf("%d", sum);

	
	while (a <= 1000) {
		sum = sum + a;
		a++;
	}
	printf("%d", sum);

	return 0;
	}
}