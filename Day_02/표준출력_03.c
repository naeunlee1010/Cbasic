#include <stdio.h>

int main() {


	printf("%d\n", 5); 
	printf("%3d\n", 5); //3ĭ Ȯ��
	printf("%5d\n", 5); //5ĭ Ȯ��
	printf("%05d\n", 5); //5ĭ Ȯ�� �� ��ĭ�� 0���� ä��
	printf("%+05d\n", 5);//+-��ȣ�߰�

	printf("%f\n", 0.12345);
	printf("%.10f\n", 0.12345); //%.����f:�Ҽ��� �ڸ����� ����
	printf("%.1f\n", 0.12345);
	printf("%.2f\n", 0.126);//��ø� �� ���� ���

	return 0;
}