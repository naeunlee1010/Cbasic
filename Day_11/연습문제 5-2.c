#include <stdio.h>
int main() {
	int array[10] = { 45, -12, 67, -30, 81, -3, 13, 74, 3, 20 };
	int max = array[0];
	int i = 0;

	for (i = 0; i < sizeof(array) / sizeof(int); i++) {
		if (max < array[i+1])
			max = array[i+1];
		
	}
	

	printf("최대값:%d 위치:%d",max,i);
	
	//printf("최소값:%d, 위치:%d", );
}