#include <stdio.h>


int main() {
	//모드 "w" "a" "r"
	char path[100] = "C:\\Users\\ITSC\\Desktop\\이나은.txt";

	FILE* fp = fopen(path, "w"); //파일 개방

	fputs("이나은\n", fp); //문자열을 파일에 write
	fputs("25세\n", fp);
	fputs("성북구\n", fp);
	fputs("유튜브보기\n", fp);
	fputs("라면\n", fp);

	fclose(fp); //파일을 닫는 함수


	return 0;
}