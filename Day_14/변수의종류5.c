//������ ����
//4)�������� ����
// register ���ľ �ٿ� ������ ����
//RAM�� �ƴ϶� CPU���� �޺����� �������Ϳ� ��������� �Ҵ�
//read/write �ӵ��� ���� => ���ӿ����� ���� ����� �޸� �ʿ��� �� ���
//���� -> CPU ���� �ʷ� �� �� ����

#include<stdio.h>
#include<time.h>

int main() {

	register int a = 0; //�������� ����
	//int a = 0;
	//UNIX Ÿ�� -> 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� ������ �ð�
	//          -> ������ �и�������(0.001��)
	//          -> ��ǻ�Ͱ� ����ϴ� �ð�


	unsigned int start =(unsigned int)time(NULL); //1000
	printf("%u\n", start);

	for (a = 0; a < 1000000; a++)
		print("%d\n", a);

	unsigned int end = (unsigned int)time(NULL); //2000

	printf("�ɸ� �ð��� %u\n", end - start);

	return 0;
}