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
	printf("���ڼ�:%d\n", characters);
	printf("�ܾ��:%d\n", words);
	printf("���μ�:%d\n", lines);
	return 0;
}