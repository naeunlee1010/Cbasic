#include <stdio.h>
int main() {
	int array[10] = { 45, -12, 67, -30, 81, -3, 13, 74, 3, 20 };
	int max = array[0];
	int i = 0;

	for (i = 0; i < sizeof(array) / sizeof(int); i++) {
		if (max < array[i+1])
			max = array[i+1];
		
	}
	

	printf("�ִ밪:%d ��ġ:%d",max,i);
	
	//printf("�ּҰ�:%d, ��ġ:%d", );
}