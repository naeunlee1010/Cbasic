#include<stdio.h>
//�迭������2 -> ������Ÿ�� �迭��[][��ũ��] ex)int arr[][3]

//void print1(int(*arr)[3], int row, int col) {
void print1(int arr[][3], int row, int col) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf(" %2d", arr[i][j]);
		}
		puts("");
	}
}
int main() {

	int arr2[2][3] = { {10,20,30},{40,50,60} };
	print1(arr2, 2, 3);
	return 0;

}