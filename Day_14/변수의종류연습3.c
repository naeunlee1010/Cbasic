#include<stdio.h>
int appleNum, bananaNum, orangeNum, total = 0;

void apple() {
	appleNum += 1;
	total += 3000;
}

void banana() {
	bananaNum += 1;
	total += 2000;
}

void orange() {
	orangeNum += 1;
	total += 1000;
}

void print() {
	printf("apple:%d, banana:%d, orange:%d, total:%d��\n", appleNum, bananaNum, orangeNum,total);
}


int main() {
	char str[20] = "";
	printf("apple:3000�� banana:2000�� orange:1000��\n");
	while (1) {

		printf("���� �Է�:");
		gets_s(str, 20);
		if (strcmp("apple", str) == 0)
			apple();
		else if (strcmp("banana", str) == 0)
			banana();
		else if (strcmp("orange", str) == 0)
			orange();
		else if (strcmp("end", str) == 0)
			break;
		else
			printf("�߸� �Է��ϼ̽��ϴ�\n");
		print();

		
	}
	

	return 0;
}