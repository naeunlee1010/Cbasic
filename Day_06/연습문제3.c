//�������� 2-6
#include <stdio.h>

int main() {

	int n1,n2;
	char op;

	printf("������ �Է��ϼ���\n");
	scanf_s("%d", &n1);
	getchar();
	scanf_s("%c", &op, 1);
	getchar();
	scanf_s("%d", &n2);
	
	printf("%d %c %d=", n1, op, n2);


	switch (op) {

	case '+': printf("%d", n1 + n2); break;
	case '-': printf("%d", n1 - n2); break;
	case '*': printf("%d", n1 * n2); break;
	case '/': printf("%d", n1 / n2); break;
	default:
		printf("���ı�ȣ�� �߸��Ǿ����ϴ�");
		return 0;
	}
	
}