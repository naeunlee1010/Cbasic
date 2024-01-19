#include <stdio.h>

int* MAX(int* a, int* b, int* c) {
	int* max = a;
	if (*max < *b) max = b;
	if (*max < *b) max = c;
	return max;
}
int* MIN(int*a, int*b, int*c); {
	int* min = a;
	if (*min > b) min = b;
	if (*min > *c) min = c;
	return min;
}

int main(void)
{
	int	a, b, c;
	int* p_max, * p_min;

	printf("세 개의 정수를 입력하시오 : ");
	scanf("%d %d %d", &a, &b, &c);

	p_max = MAX(&a, &b, &c);
	p_min = MIN(&a, &b, &c);

	printf("\n최대값 :% d\n", *p_max);
	printf("최소값 : %d \n", *p_min);

	return 0;
}


int main() {
	Max(7, 4, 9);
}