#include <stdio.h>


int main() {
	//��� "w" "a" "r"
	char path[100] = "C:\\Users\\ITSC\\Desktop\\aa.txt";


	FILE* fp = fopen(path, "w");
	//printf�� ���� ����
	//fprintf(����������, ���Ĺ��ڿ�, �μ�1..)
	fprintf(fp, "%d +%d = %d", 1, 2, 1 + 2);
	fprintf(fp, "%s %d�� %.1lf\n", "����",21, 165.3);

	fclose(fp);

	return 0;
}