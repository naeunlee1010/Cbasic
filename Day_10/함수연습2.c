#include<stdio.h>
int input() {   //����� ���� �Լ�
	int num;
	printf("�����Է�>>\n");  //ǥ�� ���̺귯�� �Լ�
	scanf_s("%d", &num);
	return num;
}
void big(int x, int y) {
	int max = x;
	if (max<y) 
		printf("�� ū ���� %d�Դϴ�\n", max);
		
}

int small(int x,int y) {
	if (x < y)
		return x;
	else
		return y;
}
void print(int a, int b, int min) {
	printf("%d��%d �� �� ���� ���� %d�Դϴ�\n",a,b,min);
}
 
int main() {
	int a = input(10,5);
	int b = input(10,5);


	big(a, b);
	int min = small(a, b);
	print(a, b, min);
}