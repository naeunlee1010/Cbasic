#include <stdio.h>


int main() {
	//모드 "w" "a" "r"
	char path[100] = "C:\\Users\\ITSC\\Desktop\\aa.txt";


	FILE* fp = fopen(path, "w");
	//printf의 파일 버젼
	//fprintf(파일포인터, 서식문자열, 인수1..)
	fprintf(fp, "%d +%d = %d", 1, 2, 1 + 2);
	fprintf(fp, "%s %d세 %.1lf\n", "나은",21, 165.3);

	fclose(fp);

	return 0;
}