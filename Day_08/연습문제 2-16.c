#include<stdio.h>

int main() {

	int characters = 0, words = 0, lines = 0;
	while (1) {
		char ch = 0;
		ch = getchar(); // = scanf_s("%c," & ch, 1);
		characters++;
		if (ch == ' ') words++;
		if (ch == '\n') {
			lines++; words++;
		}
		if (ch == EOF) break;

	}
	printf("글자수:%d\n", characters);
	printf("단어수:%d\n", words);
	printf("라인수:%d\n", lines);
	return 0;
}