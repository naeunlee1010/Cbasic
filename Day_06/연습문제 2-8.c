#include <stdio.h>

int main() {

	int use;
	double kw, cost;
	printf("�ڵ��ȣ�� �Է��ϼ���<1:������ 2:����� 3:������>");
	scanf_s("%d", &use);
	printf("���� ��뷮�� �Է��ϼ���(kw):");
	scanf("%lf", &kw);


	switch (use) {

	case 1:
		cost = (1130 + kw * 127.8) * 1.09;
		break;
	case 2:
		cost = (660 + kw * 88.5) * 1.08;
		break;
	case 3:
		cost = (370 + kw * 52.0) * 1.05;
		break;
	default:
		printf("�ٽ� �Է��Ͻÿ�");
	}
	printf("���� ����� %lf���Դϴ�",cost);

	
}