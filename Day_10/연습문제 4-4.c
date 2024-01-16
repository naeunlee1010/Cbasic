#include<stdio.h>

int main() {

	printf("### 온도면환 ###\n");
	printf("1) 섭씨 입력");
	printf("2) 화씨 입력\n\n");
	printf("메뉴 선택:");
	scanf_s("%d", &choice);

	printf("변환된 화씨:%d",fah);

	return 0;

}

int Fahrenheit(int far,int cel) {
	far = 1.8 * cel + 32;
	return far;
}

int Celsius(int far,int cel) {
	cel = (far - 32) / 1.8;
	return cel;
}