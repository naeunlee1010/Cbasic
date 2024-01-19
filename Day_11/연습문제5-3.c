#include <stdio.h>

#define MAX_SIZE 10

double  SUM(double*, int);
double  AVE(double*, int);
double  MAX(double*, int);
double  MIN(double*, int);

int main(void)
{
	int	i;
	double	array[MAX_SIZE];

	printf(" %d ���� �迭���Ҹ� �Է��Ͻÿ� \n", MAX_SIZE);

	for (i = 0; i < MAX_SIZE; ++i)
		scanf_s("%lf", array + i);

	printf("\n�迭 ���� ���� : %8d \n", sizeof(array) / sizeof(double));
	printf("        �ִ밪 : %8.2lf \n", MAX(array, MAX_SIZE));
	printf("        �ּҰ� : %8.2lf \n", MIN(array, MAX_SIZE));
	printf("        ��  �� : %8.2lf \n", AVE(array, MAX_SIZE));
	printf("        ��  �� : %8.2lf \n", SUM(array, MAX_SIZE));

	return 0;
}
double MIN(double* a, int n) {
	double min = a[0];
	for (int i = 1; i < n; i++)
		if (min > a[i]) min = a[i];
	return min;
}
double  MAX(double* a, int  n) {
	double max = a[0];
	for (int i = 1; i < n; i++)
		if (max < a[i]) max = a[i];
	return max;

}
double  AVE(double* a, int  n) {
	return SUM(a, n) / (double)n;
}
double  SUM(double* a, int  n) {
	double tot = 0;
	for (int i = 0; i < n; i++)
		tot += a[i];
	return tot;
}

