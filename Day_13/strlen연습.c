#include <stdio.h>
#include<string.h>

int main() {
	char str[100] = "";
	gets_s(str, sizeof(str));
	int count = strlen(str);
	printf("%s는(은) %d글자입니다\n", str, count);

	
	/*char word[100] = "";
	gets_s(word, sizeof(word));
	int count = strlen(word);
	printf("\'%c\'는(은) %d글자입니다", word, 100, count/2);*/

	return 0;
}