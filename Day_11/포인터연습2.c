#include <stdio.h>
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int a = 10, b = 20;

	printf("a = %d,b=%d\n", a, b); //10,20
	swap(&a, &b); //a,b���� ��ȯ�ϴ� �Լ�
	printf("a =%d, b=%d\n", a, b); //20,10

	
}