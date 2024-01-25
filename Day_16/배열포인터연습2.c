#include <stdio.h> 
void printarr(double[][5],int,int);
void step1(double[][5], int, int);

int main() {

	double arr[3][5] = { 0 };
	printarr(arr, 3, 5);
	step1(arr, 3, 5);  //1.0 2.0 3.0 ....15.0


	return 0;
}
void printarr(double arr[][5],int row,int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%5.1lf", arr[i][j]);
		}
		puts("");
	}
}

void step1(double arr[][5], int row, int col) {
	double a = 1.0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = a;
			a++;
		}
	}
	printarr(arr, row, col);
}