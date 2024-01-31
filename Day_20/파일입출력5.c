#include <stdio.h>
#include EOF -1
//오류의 종류
//  1) 컴파일 오류 -> 실행 단계로 넘어가지 않음 -> error
//  2) 런타임 오류 -> 실행 중간에 발생하는 오류 -> exception
//  3) 논리적 오류 -> 코드가 원하는 결과를 내지 않음 -> bug
int main() {

	char path[100] = "C:\\Users\\ITSC\\Desktop\\b.txt";
	FILE* fp = fopen(path, "r");
	// "r" read ->  파일을 read 모드
	//          -> 파일이 없는 경우, NULL을 return

	if (fp == NULL) return -1; //비정상종료를 방지하기 위한 예외 처리
	//int fgets(파일포인터)
	int ch = fgetc(fp);//파일에서 한 글자 읽어와서 아스키코드 숫자를 int형으로 리턴
	printf("%d %c\n", ch,(char)fgetc(fp));
	ch = fgetc(fp);   printf("%d %c\n", ch, (char)fgetc(fp));
	ch = fgetc(fp);   printf("%d %c\n", ch, (char)fgetc(fp));
	ch = fgetc(fp);   printf("%d %c\n", ch, (char)fgetc(fp));
	ch = fgetc(fp);   printf("%d %c\n", ch, (char)fgetc(fp));
	ch = fgetc(fp);   printf("%d %c\n", ch, (char)fgetc(fp));
	//더이상 읽어올 것이 없으면 -1 리턴
	//=파일의 끝에 도달
	//=-1을 파일 끝을 의미하는 상수
	//심볼릭 상수 EOF(End Of File)

	printf("%d\n", EOF);
	fclose(fp);


	return 0;

}