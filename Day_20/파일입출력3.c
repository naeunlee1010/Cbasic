//���� �����
// ��Ʈ�� -=>���μ����� ���ϰ��� ����
// ��Ʈ���� ���� -> ������ ���� open


#include <stdio.h>

int main() {
	//��� "w" "a" "r"
	char path[100] = "C:\\Users\\ITSC\\Desktop\\a.txt";

	FILE* fp = fopen(path, "w"); //���� ����

	//fputc(����,����������)
	fputc('a', fp); //�� ���ڸ� ���Ͽ� write
	//fputs(���ڿ�,����������)
	fputs("apple", fp); //���ڿ��� ���Ͽ� write

	fclose(fp); //������ �ݴ� �Լ�


	return 0;
}