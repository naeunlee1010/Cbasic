//�������� ���ó
//2)�迭�� ��Ī�� �� ���

#include <stdio.h>
void printarr(int* a) {
	for (int i = 0; i < 5; i++) {
		printf("%d", a[i]);
	}
}
int main() {
	int arr[5] = { 1,2,3,4,5 };
	//������ -> ��
	//�迭�� -> �ּ�(�����ּ�)
	printf("%p\n", arr);
	printarr(arr);

	return 0;
}