#include<stdio.h>
    //�Ű�����():�Լ� �ܺ��� ���� ���η� ����
//return Ÿ�� �Լ��̸�(�Ű�����) {��ü}
int funcA(int a, int b) { //�Լ��� ����(define)
	printf("�Լ� A\n");//�Լ��� {}:�Լ��� body(��ü)
	return a + b;
	//return ->�Լ��� �����ϴ� �����
	//a+b-> return value(��ȯ��):�Լ��� �����ϸ鼭 ����� ��
}

int main() {
	int a = funcA(10, 11); //�Լ��� ȣ��(call)
		//�Լ���(�μ�1,����2)
 //�μ�(arguments) ->�Լ��� ()�� ���� ��
	printf("%d", a);
	return 0;
}