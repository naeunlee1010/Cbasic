//switch ���� �Ѱ�
//���� ��ġ�ϴ� ���Ǹ� ���� -> �ε���� �� ��
//switch���� ()���� 1���� �ǰ�, ����Ÿ��(int,char)�� ����

#include <stdio.h>

int main() {

	int a = 1;
	if (a == 1) printf("��");
	else if (a > 3) printf("3�̻�");

	switch (a) {

	case 1:
		print("��");
	}
	//case 1.5: (x)

	char c = 'a';
	switch (c) {
	case 'a': print("����");
	//case "apple" (x)
	}//���ڴ� ''�� ����, ���ڿ��� ""�� ����
	return 0;
}