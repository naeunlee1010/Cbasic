#include <stdio.h>


int main() {
	//��� "w" "a" "r"
	char path[100] = "C:\\Users\\ITSC\\Desktop\\�̳���.txt";

	FILE* fp = fopen(path, "w"); //���� ����

	fputs("�̳���\n", fp); //���ڿ��� ���Ͽ� write
	fputs("25��\n", fp);
	fputs("���ϱ�\n", fp);
	fputs("��Ʃ�꺸��\n", fp);
	fputs("���\n", fp);

	fclose(fp); //������ �ݴ� �Լ�


	return 0;
}