#include<stdio.h>
int input() {   //사용자 정의 함수
	int num;
	printf("정수입력>>\n");  //표준 라이브러리 함수
	scanf_s("%d", &num);
	return num;
}
void big(int x, int y) {
	int max = x;
	if (max<y) 
		printf("더 큰 수는 %d입니다\n", max);
		
}

int small(int x,int y) {
	if (x < y)
		return x;
	else
		return y;
}
void print(int a, int b, int min) {
	printf("%d와%d 중 더 작은 수는 %d입니다\n",a,b,min);
}
 
int main() {
	int a = input(10,5);
	int b = input(10,5);


	big(a, b);
	int min = small(a, b);
	print(a, b, min);
}