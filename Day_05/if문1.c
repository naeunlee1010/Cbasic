#include <stdio.h>

int main() {

	
	/*int num;
	printf("�����Է�:\n");
	scanf_s("%d", &num);

	//if (���ǽ�) ���� �� ������ �ڵ�;
	//else ������ �� ������ �ڵ�;

	//if���� �ڿ��� �ݵ�� (���ǽ�)�� �־�� ��
	//else �ڿ��� (���ǽ�) ����� ��
	//if���� �ܵ����� ��� ���� (else)�� �Ұ���
	if (num % 2 == 1) { //������ �ڵ� 2�� �̻��� ���, {}�� ����� ��
		printf("Ȧ��");
		printf("%d�� Ȧ���Դϴ�."\n)
	}
		
	else
		printf("¦��");

	*/

	int num1, num2;
	printf("���� �ΰ� �Է�:\n");
	scanf_s("%d , %d", num1, num2);

	if (num1 > num2) 
		printf("�ִ밪�� %d�Դϴ�", num1);
	
	else
		printf("�ִ밪�� %d�Դϴ�", num2);

	return 0;
}