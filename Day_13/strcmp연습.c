#include <stdio.h>
#include<string.h>

int main() {

	char id[100] = "apple";
	char pw[100] = "1234";

	printf("id:");
	gets_s(id, sizeof(id));
	printf("pw:");
	gets_s(pw, sizeof(pw));

	if (strcmp(id, "apple") == 0) {
		if (strcmp(pw, "1234") == 0)
			printf("login합니다");
		else printf("잘못된 password입니다");
	}
	else printf("없는 아이디 입니다");


	return 0;
}