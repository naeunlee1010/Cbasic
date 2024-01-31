#include <stdio.h>


int main() {
	//모드 "w" "a" "r"
	char path[100] = "C:\\Users\\ITSC\\Desktop\\fruit.txt";


	FILE* fp = fopen(path, "r");

	char temp[100];
	//char* fgets(읽어온 문자열을 저장할 배열, 배열의 크기, 파일포인터)
	//파일에서 한 줄 씩 읽어와서 배열에 저장하고 문자열의 쥬소 리턴
	//더이상 읽어올 라인이 없는 경우 NULL리턴
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