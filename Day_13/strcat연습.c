#include <stdio.h>
#include<string.h>

int main() {
	char Fname[50] = "";
	char Mname[50] = "";

	printf("��:");
	gets_s(Fname, sizeof(Fname));

	printf("�̸�:");
	gets_s(Mname, sizeof(Mname));

	strcat_s(Fname, sizeof(Fname), Mname);
	puts(Fname);

	return 0;
}