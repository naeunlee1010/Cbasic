/*#include <stdio.h>

int main() {
	int a, b;
	scanf_s("%d%d\n", &a, &b);
	if (a >= b) 
		printf("%d\n", a - b);
	else
		printf("%d\n", a - b);
}
*/
//#include <stdio.h>
//
//int main() {
//	int age;
//	scanf_s("%d\n", &age);
//	if (age >= 70, age<=6)
//		printf("무료입장입니다\n");
//	else
//		printf("입장료 3000\n");

//#include <stdio.h>
//
//int main() {
//	int a, b, c, d;
//	scanf_s("%d%d%d%d%d\n", &a, &b, &c, &d, &e);
//
//	//첫번째 방법
//	int max;
//	if (a > b && a > c && a > d) max = a;
//	if (a > b && a > c && a > d) max = b;
//	if (a > b && a > c && a > d) max = c;
//	//두번째 방법
//	int min = a;
//	if (min > b) min = b;
//	if (min > c) min = c;
//	if (min > d) min = d;
//	if (min > e) min = e;
//
//	printf("최솟값은 %d\n", min);
//}

#include <stdio.h>

int main() {
	int year;
	scanf_s("%d", &year);

	if (year % 4 == 0) {
		if (year % 100 == 0){
			if (year % 400 == 0) {
				printf("윤년입니다");
			else
				printf("평년입니다");
			}
		else
			printf("평년입니다")
		}	
	else
		printf("평년입니다");
}
		
}