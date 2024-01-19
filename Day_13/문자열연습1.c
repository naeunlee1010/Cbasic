#include <stdio.h>

int main() {
	char name[20] = ""; 
	char adress[100] = "";
	char hobby[50] = "";
	char food[50] = "";

	printf("이름:");
	gets_s(name, 20);
	
	
	printf("주소:");
	gets_s(adress,sizeof(adress));
	printf("\n");
	printf("취미:");
	gets_s(hobby,sizeof(hobby));
	printf("\n");
	printf("좋아하는 음식:");
	gets_s(food,sizeof(food));
	printf("\n");

	puts(name);
	puts(adress);
	printf("%s %s\n", hobby, food);
}