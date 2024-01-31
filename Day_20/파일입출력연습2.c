#include <stdio.h>
#include <string.h>

int main() {
	//모드 "w" "a" "r"
	char path[100] = "C:\\Users\\ITSC\\Desktop\\fruit.txt";

	FILE* fp = fopen(path, "w"); //파일 개방
	

	while (1) {
		char temp[100] = "";
		printf("과일:\n", fp); 
		gets_s(temp, 100);
		if (strcmp(temp ,"end") == 0) break;
		fputs(temp, fp);
		fputc('\n', fp);
		
		
	}
	
	fclose(fp); //파일을 닫는 함수


	return 0;
}