#include <stdio.h>

int main() {
	//offset(������):������ �д� ����
	//               ->1����Ʈ�� �̵�
	char path[100] = "C:\\Users\\ITSC\\Desktop\\a.txt";

	FILE* fp = fopen(path, "a");
	// "w" -> ������ ������ �� ����� ���� ��(write)
	//     -> ������ ���� ���, ������ ����
	//     -> offset�� ������ ó������ �̵�
	// "a" -> ������ ���� �̾(append)
	//     -> ������ ���� ���, ������ ����
	//     -> offset�� ������ ������ �̵�
	fputs("ace", fp);

	fclose(fp);


	return 0;
}