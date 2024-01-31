#pragma warning(disable:4996)
#include <stdio.h>


int main() {
	
	char path[100] = "C:\\Users\\ITSC\\Desktop\\a.txt";


	FILE* fp = fopen(path, "r");
	char name[100] = "";
	int age = 0;
	double height = 0.0;
	//scanf의 파일버전
	//fscanf(파일포인터, 서식문자열, 저장할 변수1,...)
	fscanf(fp,"%s",name);
	printf( "%s",name);

	fclose(fp);

	return 0;
}