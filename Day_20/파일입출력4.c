#include <stdio.h>

int main() {
	//offset(오프셋):파일을 읽는 지점
	//               ->1바이트씩 이동
	char path[100] = "C:\\Users\\ITSC\\Desktop\\a.txt";

	FILE* fp = fopen(path, "a");
	// "w" -> 파일의 내용을 다 지우고 새로 씀(write)
	//     -> 파일이 없는 경우, 파일을 생성
	//     -> offset을 파일의 처음으로 이동
	// "a" -> 파일의 끝에 이어씀(append)
	//     -> 파일이 없는 경우, 파일을 생성
	//     -> offset을 파일의 끝으로 이동
	fputs("ace", fp);

	fclose(fp);


	return 0;
}