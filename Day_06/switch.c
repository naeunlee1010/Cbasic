#include <stdio.h>
int main() {



	int a = 0;
	scanf_s("%d", &a);
	//switch���� �������� ����
	//switch���� ()���� ������ ���� �ش��ϴ� case���̕��� �̵�
	//break�� �Բ� ����ϸ� �б⹮ó�� ����� �� ����

	switch (a) {
		//��: -> ���̺�
	case 1: case 2: case 3: //case ���̺��� �������� �ۼ��ص� ��
		printf("��\n");
		break; //break�� = {}���� Ż���ϴ� ����

	case 4: // case 4,5,6: (x)
		printf("��\n");
		break;
	case 5:
		printf("��\n");
		break;

	default://�⺻ ���̺� -> �ش��ϴ� ���̺� ���� ��� �̵��Ǵ� ���̺�,
			//else�� ������ ���, ���� ����
		printf("�׹ۿ�\n");
	}
}