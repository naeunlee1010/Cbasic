#include <stdio.h>
#include <string.h>

int main() {
	//��� "w" "a" "r"
	char path[100] = "C:\\Users\\ITSC\\Desktop\\fruit.txt";

	FILE* fp = fopen(path, "w"); //���� ����
	

	while (1) {
		char temp[100] = "";
		printf("����:\n", fp); 
		gets_s(temp, 100);
		if (strcmp(temp ,"end") == 0) break;
		fputs(temp, fp);
		fputc('\n', fp);
		
		
	}
	
	fclose(fp); //������ �ݴ� �Լ�


	return 0;
}