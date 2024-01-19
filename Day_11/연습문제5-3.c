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

	printf(" %d 개의 배열원소를 입력하시오 \n", MAX_SIZE);

	for (i = 0; i < MAX_SIZE; ++i)
		scanf_s("%lf", array + i);

	printf("\n배열 원소 개수 : %8d \n", sizeof(array) / sizeof(double));
	printf("        최대값 : %8.2lf \n", MAX(array, MAX_SIZE));
	printf("        최소값 : %8.2lf \n", MIN(array, MAX_SIZE));
	printf("        평  균 : %8.2lf \n", AVE(array, MAX_SIZE));
	printf("        합  계 : %8.2lf \n", SUM(array, MAX_SIZE));

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

