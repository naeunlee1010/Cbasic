#include<stdio.h>

//�Լ��� �����ϴ� ���1: ȣ�� ���� �����ϰ� ����
int funcA(int a) {
	return a + 1;
}

//�Լ��� �����ϴ� ���2:�Լ��� prototype(����) ���� �� ���߿� ����
int funcB(int,double); //�Լ��� ����: ����Ÿ�԰� �Ű�����Ÿ�� �̸� ������ ����


int main() {

	int a = funcA(1);
	int b = funcB(2,2.5);

	return 0;
}
int funcB(int a, double b) {
	return a + (int)b;
}