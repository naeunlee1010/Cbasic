#pragma warning(disable:4996)
#include <stdio.h>

typedef struct {
	char name[100];
	int kor ,eng, mat, tot = 0;
	double avg;
} stu;
void input(stu* a) {
	scanf_s("%s %d %d %d", a->name, 30, &a->kor, &a->eng, &a->mat);
}
int main() {
	stu arr[3];
	for (int i = 0; i < 3; i++)
		input(arr[i]);
	
	¹º ±ÙÁ¶Ã¼¾ß
	

}