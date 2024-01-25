#include <stdio.h>
void printarr(int(*)[3], int, int);
void zero(int(*)[3], int, int);
void one(int(*)[3], int, int);
void diag(int(*)[3], int, int);


int main() {

	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	printarr(arr, 3, 3);
	//123
	//456
	//789
	zero(arr, 3, 3); //배열의 원소를 모두 0으로 변경
	one(arr, 3, 3); //배열의 원소를 모두 1으로 변경
	diag(arr, 3, 3); //대각선 방향의 원소를 모두 1로 변경
	//1 0 1
	//0 1 0
	//1 0 1


	return 0;
}
void printarr(int (*arr)[3], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%2d", arr[i][j]);
		}
		puts("");
	}
}

void zero(int (*arr)[3], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = 0;	
		}
		
	}
	printarr(arr, row, col);
}

void one(int (*arr)[3], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = 1;
		}
		
	}
	printarr(arr, row, col);
}

void diag(int(*arr)[3], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if(i == j) arr[i][j] = 1;
			else  arr[i][j] = 0;
		}
		
	}
	printarr(arr, row, col);

}