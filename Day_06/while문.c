//while ��, do~while ��, for ��
#include <stdio.h>

int main() {

	int a = 0, i = 0, j = 0; //�ݺ��� ������ ����


	//Ư���� �ݺ����� �ڵ��(����)�� loop��� �θ�
	//while(���ǽ�) {�ݺ��� �ڵ�;������;}
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