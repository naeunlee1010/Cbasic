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
			printf("login�մϴ�");
		else printf("�߸��� password�Դϴ�");
	}
	else printf("���� ���̵� �Դϴ�");


	return 0;
}