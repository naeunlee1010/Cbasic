//변수의 종류
//4)레지스터 변수
// register 수식어가 붙여 선언한 변수
//RAM이 아니라 CPU내부 메보리인 레지스터에 저장공간을 할당
//read/write 속도가 빠름 => 게임엔진과 같은 고속의 메모리 필요할 때 사용
//단점 -> CPU 고장 초래 할 수 있음

#include<stdio.h>
#include<time.h>

int main() {

	register int a = 0; //레지스터 변수
	//int a = 0;
	//UNIX 타임 -> 1970년 1월 1일 0시 0분 0초부터 누적된 시간
	//          -> 단위는 밀리세컨즈(0.001초)
	//          -> 컴퓨터가 사용하는 시간


	unsigned int start =(unsigned int)time(NULL); //1000
	printf("%u\n", start);

	for (a = 0; a < 1000000; a++)
		print("%d\n", a);

	unsigned int end = (unsigned int)time(NULL); //2000

	printf("걸린 시간은 %u\n", end - start);

	return 0;
}