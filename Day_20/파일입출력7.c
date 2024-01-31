#include <stdio.h>


int main() {
	//¸ðµå "w" "a" "r"
	char path[100] = "C:\\Users\\ITSC\\Desktop\\fruit.txt";
	char path[100] = "C:\\Users\\ITSC\\Desktop\\fruit_copy.txt";

	FILE* fp1 = fopen(path, "r");
	FILE* fp2 = fopen(path, "w");

	while (1) {
		int ch = fgetc(fp1);
		if (ch == -1) break;
		fputc(ch, fp2);
	}
	fclose(fp1);
	fclose(fp2);


	return 0;
}