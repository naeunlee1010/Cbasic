#include <stdio.h>
void print1(int* arr, int size) {
	for (int i = 0; i < 3; i++) {
		printf("%2d", arr[i]);
	}
	puts(""); //한 줄 비우는 것 공백 문자열
}

//배열 포인터 -> 2차원 배열을 지칭하는 포인터 변수
// 데이터타입 (*변수명)[열의크기]
//int (*arr)[3]
//주의할 점 반드시 () 쳐야 함, 열의 크기를 기입해야 함
void print2(int (*arr)[3], int row, int col) {
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf(" %2d", arr[i][j]);
		}
		puts("");
	}
}
int main() {
	int arr1[3] = { 10,20,30 };
	print1(arr1, 3);

	int arr2[2][3] = { {10,20,30},{40,50,60} };
	print2(arr2, 2, 3);
	return 0;
	
}