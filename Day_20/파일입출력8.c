#include <stdio.h>


int main() {
	//��� "w" "a" "r"
	char path[100] = "C:\\Users\\ITSC\\Desktop\\fruit.txt";


	FILE* fp = fopen(path, "r");

	char temp[100];
	//char* fgets(�о�� ���ڿ��� ������ �迭, �迭�� ũ��, ����������)
	//���Ͽ��� �� �� �� �о�ͼ� �迭�� �����ϰ� ���ڿ��� ��� ����
	//���̻� �о�� ������ ���� ��� NULL����
	char* s = fgets(temp,sizeof(temp),fp);
	printf("%s", s);
	s = fgets(temp, sizeof(temp), fp);   printf("%s", s);
	s = fgets(temp, sizeof(temp), fp);   printf("%s", s);
	s = fgets(temp, sizeof(temp), fp);   printf("%s", s);
	s = fgets(temp, sizeof(temp), fp);   printf("%s", s);
	s = fgets(temp, sizeof(temp), fp);   printf("%s", s);
	s = fgets(temp, sizeof(temp), fp);   printf("%s", s);

	fclose(fp);

	return 0;
}