//������ ����
//5) �ܺ� ����(extern variable)
//extern ���ľ ���� ����
//�ٸ� ���Ͽ��� ������ ������ ������ �� �� ���

#include<stdio.h>

int main() {

	extern int a;
	extern double b;
	extern char c;

	printf("%d\n", a);
	printf("%lf\n", b);
	printf("%c\n", c);


	return 0;
}