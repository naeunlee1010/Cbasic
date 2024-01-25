#include<stdio.h>
int kim, lee, park, ex = 0;

void Kim() {
	kim += 1;
}

void Lee() {
	lee += 1;
	
}

void Park() {
	park += 1;
	
}

void print() {
	printf("±è¾¾:%d\n, ÀÌ¾¾:%d\n, ¹Ú¾¾:%d\n, ±× ¿Ü:%d¿ø\n", kim, lee, park, ex);
}

int main() {
	char str[20] = "";
	while (1) {

		printf("ÀÌ¸§:");
		gets_s(str, 20);
		if (strncmp("±è", str, 2) == 0) 
			Kim();
		else if (strncmp("ÀÌ", str,2) == 0)
			Lee();
		else if (strncmp("¹Ú", str,2) == 0)
			Park();
		else if (strcmp("³¡", str) == 0)
			break;
		else
			ex += 1;
		
		print();


	}


	return 0;
}