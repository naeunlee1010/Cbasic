//�Ű������� ���ϰ��� ������ ���� ������
//�Լ��� 4���� ���

//1)��ȯ�� o, �Ű����� o
double funcA(int a) {
	return (double)a + 0.5;
}
//2)��ȯ�� o, �Ű����� x
char funcB() {
	return 'B';
}
//3)��ȯ�� x, �Ű����� o
void funcC(int a) {
	printf("funcC %d\n", a);
}
//4)��ȯ�� x, �Ű����� x
void funcD() {
	int a;
	scanf_s("%d", &a);
	printf("%d", a + 10);
}
#include<stdio.h>
int main() {
////	//�Լ� ȣ�� �ÿ��� ���ǵ� �Լ��� ���Ŀ� ���� ȣ���ؾ� ��
////	double a = funcA(4);
////	printf("%.1lf\n", funcA(4));
////	printf("%c\n", funcB());
////	funcC(10);
////	funcD();
////
	int b = printf("a%d\n",10);
	printf("\n%d\n", b);
}