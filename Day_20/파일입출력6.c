#include <stdio.h>

int main() {
	//��� "w" "a" "r"
	char path[100] = "C:\\Users\\ITSC\\Desktop\\b.txt";

	FILE* fp = fopen(path, "r"); 

	while (1) {
		int ch = fgetc(fp);
		if (ch == EOF) break;
		printf("%c", (char)ch);
	}
	fclose(fp);

	return 0;
}