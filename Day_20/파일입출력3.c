//파일 입출력
// 스트림 -=>프로세스와 파일과의 연결
// 스트림을 생성 -> 파일을 개방 open


#include <stdio.h>

int main() {
	//모드 "w" "a" "r"
	char path[100] = "C:\\Users\\ITSC\\Desktop\\a.txt";

	FILE* fp = fopen(path, "w"); //파일 개방

	//fputc(문자,파일포인터)
	fputc('a', fp); //한 글자를 파일에 write
	//fputs(문자열,파일포인터)
	fputs("apple", fp); //문자열을 파일에 write

	fclose(fp); //파일을 닫는 함수


	return 0;
}