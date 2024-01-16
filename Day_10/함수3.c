//매개변수와 리턴값의 유무에 따라 구분함
//함수의 4가지 모습

//1)반환값 o, 매개변수 o
double funcA(int a) {
	return (double)a + 0.5;
}
//2)반환값 o, 매개변수 x
char funcB() {
	return 'B';
}
//3)반환값 x, 매개변수 o
void funcC(int a) {
	printf("funcC %d\n", a);
}
//4)반환값 x, 매개변수 x
void funcD() {
	int a;
	scanf_s("%d", &a);
	printf("%d", a + 10);
}
#include<stdio.h>
int main() {
////	//함수 호출 시에는 정의된 함수의 형식에 따라 호출해야 함
////	double a = funcA(4);
////	printf("%.1lf\n", funcA(4));
////	printf("%c\n", funcB());
////	funcC(10);
////	funcD();
////
	int b = printf("a%d\n",10);
	printf("\n%d\n", b);
}