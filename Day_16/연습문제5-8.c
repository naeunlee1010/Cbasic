#include <stdio.h>

#define ROW 4
#define COL 3

void  INPUT(int(*)[COL], int, int);
void  OUTPUT(int(*)[COL], int, int);

int  ROW_SUM(int*, int);
int  COL_SUM(int(*)[COL], int);
int  TOT_SUM(int(*)[COL], int, int);

int main(void)
{
	int	arr[ROW][COL];

	INPUT(arr, ROW, COL);
	OUTPUT(arr, ROW, COL);

	return 0;
}
void  INPUT(int(*arr)[COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		printf("%d: ", i + 1);
		for (int j = 0; j < col; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}
}
void  OUTPUT(int(*arr)[COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%3d", arr[i][j]);
		}
	}
	    printf("|%3d\n", ROW_SUM(arr[i], COL);
}
int  ROW_SUM(int*, int) {
	int sum = 0;
}
int  COL_SUM(int(*)[COL], int) {
	int sum = 0;
	sum = arr[0][col] + arr[1][col] + arr[2][col] + arr[3][col];
}
int  TOT_SUM(int(*)[COL], int, int);
