#include <stdio.h>
void print1(int* arr, int size) {
	for (int i = 0; i < 3; i++) {
		printf("%2d", arr[i]);
	}
	puts(""); //�� �� ���� �� ���� ���ڿ�
}

//�迭 ������ -> 2���� �迭�� ��Ī�ϴ� ������ ����
// ������Ÿ�� (*������)[����ũ��]
//int (*arr)[3]
//������ �� �ݵ�� () �ľ� ��, ���� ũ�⸦ �����ؾ� ��
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