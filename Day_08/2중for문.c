#include<stdio.h>

int main() {
	//��ø��(nested) for��
	//for�� ���ο� �� �ٸ� for���� �ִ� �ݺ���

	for (int i = 0; i < 3; i++) {
		printf("loop i\n");
		for (int j = 0; j < 2; j++) {
			printf("\tloop j\n");
			for (int k = 0; k < 5; k++) {
				if (k == 3)break;
				//�ݺ� ��ü�� �ߴ� �Ǵ� ���� �ƴ϶�, �ش� ������ �ߴܵ�
				printf("\t\tloop k\n");
			}
		}
	}



	return 0;
}