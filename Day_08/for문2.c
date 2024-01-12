#include<stdio.h>

int main() {
	//break ->반복을 중단
	//continue ->반북을 유지하지만 뒤에 오는 코드가 생략됨
	for (int i = 0; i < 10; i++) {
		if (i == 5) break;
		printf("%d\n", i);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		if (i == 5) continue;
		printf("%d\n", i);
	}
	return 0;
}