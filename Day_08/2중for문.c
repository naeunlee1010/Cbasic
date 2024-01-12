#include<stdio.h>

int main() {
	//중첩된(nested) for문
	//for문 내부에 또 다른 for문이 있는 반복문

	for (int i = 0; i < 3; i++) {
		printf("loop i\n");
		for (int j = 0; j < 2; j++) {
			printf("\tloop j\n");
			for (int k = 0; k < 5; k++) {
				if (k == 3)break;
				//반복 전체가 중단 되는 것이 아니라, 해당 루프만 중단됨
				printf("\t\tloop k\n");
			}
		}
	}



	return 0;
}