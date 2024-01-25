#include <stdio.h>

#define ROW 5		// 학생 수
#define COL 3		// 과목 수

void  INPUT(int(*)[COL], int, int);
void  OUTPUT(int(*)[COL], int, int);
int  SUM(int*, int);
double  AVE(int*, int);

int main()
{
	int	score[ROW][COL] = { 0 };

	INPUT(score, ROW, COL);
	OUTPUT(score, ROW, COL);

	return 0;
}
void  INPUT(int(*)[COL], int, int) {

}
void  OUTPUT(int(*)[COL], int, int) {

}
int  SUM(int*, int) {

}
double  AVE(int*, int) {

}