#include <stdio.h>

int main() {
	char name[20] = ""; 
	char adress[100] = "";
	char hobby[50] = "";
	char food[50] = "";

	printf("�̸�:");
	gets_s(name, 20);
	
	
	printf("�ּ�:");
	gets_s(adress,sizeof(adress));
	printf("\n");
	printf("���:");
	gets_s(hobby,sizeof(hobby));
	printf("\n");
	printf("�����ϴ� ����:");
	gets_s(food,sizeof(food));
	printf("\n");

	puts(name);
	puts(adress);
	printf("%s %s\n", hobby, food);
}