#include <stdio.h>
#include EOF -1
//������ ����
//  1) ������ ���� -> ���� �ܰ�� �Ѿ�� ���� -> error
//  2) ��Ÿ�� ���� -> ���� �߰��� �߻��ϴ� ���� -> exception
//  3) ���� ���� -> �ڵ尡 ���ϴ� ����� ���� ���� -> bug
int main() {

	char path[100] = "C:\\Users\\ITSC\\Desktop\\b.txt";
	FILE* fp = fopen(path, "r");
	// "r" read ->  ������ read ���
	//          -> ������ ���� ���, NULL�� return

	if (fp == NULL) return -1; //���������Ḧ �����ϱ� ���� ���� ó��
	//int fgets(����������)
	int ch = fgetc(fp);//���Ͽ��� �� ���� �о�ͼ� �ƽ�Ű�ڵ� ���ڸ� int������ ����
	printf("%d %c\n", ch,(char)fgetc(fp));
	ch = fgetc(fp);   printf("%d %c\n", ch, (char)fgetc(fp));
	ch = fgetc(fp);   printf("%d %c\n", ch, (char)fgetc(fp));
	ch = fgetc(fp);   printf("%d %c\n", ch, (char)fgetc(fp));
	ch = fgetc(fp);   printf("%d %c\n", ch, (char)fgetc(fp));
	ch = fgetc(fp);   printf("%d %c\n", ch, (char)fgetc(fp));
	//���̻� �о�� ���� ������ -1 ����
	//=������ ���� ����
	//=-1�� ���� ���� �ǹ��ϴ� ���
	//�ɺ��� ��� EOF(End Of File)

	printf("%d\n", EOF);
	fclose(fp);


	return 0;

}