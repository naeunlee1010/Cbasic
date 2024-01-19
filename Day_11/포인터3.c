//포인터의 사용처
//2)배열을 지칭할 때 사용

#include <stdio.h>
void printarr(int* a) {
	for (int i = 0; i < 5; i++) {
		printf("%d", a[i]);
	}
}
int main() {
	int arr[5] = { 1,2,3,4,5 };
	//변수명 -> 값
	//배열명 -> 주소(시작주소)
	printf("%p\n", arr);
	printarr(arr);

	return 0;
}