#pragma warning(disable:4996)
#include <stdio.h>


int main() {
	
	char path[100] = "C:\\Users\\ITSC\\Desktop\\a.txt";


	FILE* fp = fopen(path, "r");
	char name[100] = "";
	int age = 0;
	double height = 0.0;
	//scanf�� ���Ϲ���
	//fscanf(����������, ���Ĺ��ڿ�, ������ ����1,...)
	fscanf(fp,"%s",name);
	printf( "%s",name);

	fclose(fp);

	return 0;
}