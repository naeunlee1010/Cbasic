#include <stdio.h>

int main() {


	double num;

	printf("���� �Է�:\n");
	scanf_s("%lf", &num);

	if (sizeof(num) == 4)   //if( num == (int)num)
		printf("%lf�� �����Դϴ�", num);

	else
		printf("%lf�� �Ǽ��Դϴ�", num);
}

	return 0;