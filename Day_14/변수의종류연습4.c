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
	printf("�达:%d\n, �̾�:%d\n, �ھ�:%d\n, �� ��:%d��\n", kim, lee, park, ex);
}

int main() {
	char str[20] = "";
	while (1) {

		printf("�̸�:");
		gets_s(str, 20);
		if (strncmp("��", str, 2) == 0) 
			Kim();
		else if (strncmp("��", str,2) == 0)
			Lee();
		else if (strncmp("��", str,2) == 0)
			Park();
		else if (strcmp("��", str) == 0)
			break;
		else
			ex += 1;
		
		print();


	}


	return 0;
}