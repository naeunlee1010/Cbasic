//��ø�� if��
//if�� ���ο� �Ǵٸ� if~else���� ��ġ�� �� ����
//if~else���� ���ǹ�, �б⹮, ����̶�� �θ�
#include <stdio.h>

int main() {


	int a;
	scanf_s("%d", &a);

	if (a > 0) printf("plus\n");
	else {
		if (a == 0) printf("zero\n");
		else printf("minus\n");

	}
	return 0;
}