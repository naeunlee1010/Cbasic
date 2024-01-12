#include<stdio.h>

int main() {
	for (int dan = 2; dan < 20; dan++) {
		printf("----%d단----\n", dan);
		for (int a = 1; a < 20; a++) {
			if (dan < 10 && a>9) continue; //()얀에 있는 조건이 충족되면 반복을 유지한 채 반복 유지
			printf("%d x %d = %d\n", dan, a, dan * a);
			
			
		}
	}

	return 0;
}