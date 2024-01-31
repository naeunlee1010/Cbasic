#include <stdio.h>


int main() {
	//모드 "w" "a" "r"
	char path1[100] = "C:\\Users\\ITSC\\Desktop\\이나은.txt";
	char path2[100] = "C:\\Users\\ITSC\\Desktop\\이나은_copy.txt";

	FILE* fp1 = fopen(path1, "r");
	FILE* fp2 = fopen(path2, "w");

	char temp[100] = "";
	while (1) {
		char* s = fgets(temp, sizeof(temp), fp1);
		if (s == NULL) break;
		fputs(temp,fp2);
	}
	fclose(fp1);
	fclose(fp2);

	return 0;
}