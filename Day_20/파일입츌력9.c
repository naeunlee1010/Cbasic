#include <stdio.h>


int main() {
	//¸ðµå "w" "a" "r"
	char path[100] = "C:\\Users\\ITSC\\Desktop\\fruit.txt";


	FILE* fp = fopen(path, "r");

	char temp[100] = "";
	while (1) {
		char* s = fgets(temp, sizeof(temp), fp);
		if (s == NULL) break;
		printf("%s", temp);
	}
	fclose(fp);

	return 0;
}