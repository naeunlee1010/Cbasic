#include<stdio.h>

int main() {
	for (int dan = 2; dan < 20; dan++) {
		printf("----%d��----\n", dan);
		for (int a = 1; a < 20; a++) {
			if (dan < 10 && a>9) continue; //()�ῡ �ִ� ������ �����Ǹ� �ݺ��� ������ ä �ݺ� ����
			printf("%d x %d = %d\n", dan, a, dan * a);
			
			
		}
	}

	return 0;
}