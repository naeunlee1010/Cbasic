#include <stdio.h>

int main() {

	
	/*int num;
	printf("정수입력:\n");
	scanf_s("%d", &num);

	//if (조건식) 참일 때 실행할 코드;
	//else 거짓일 때 실행할 코드;

	//if문듸 뒤에는 반드시 (조건식)이 있어야 함
	//else 뒤에는 (조건식) 없어야 함
	//if문은 단독으로 사용 가능 (else)는 불가능
	if (num % 2 == 1) { //실행할 코드 2줄 이상인 경우, {}로 묶어야 함
		printf("홀수");
		printf("%d는 홀수입니다."\n)
	}
		
	else
		printf("짝수");

	*/

	int num1, num2;
	printf("숫자 두개 입력:\n");
	scanf_s("%d , %d", num1, num2);

	if (num1 > num2) 
		printf("최대값은 %d입니다", num1);
	
	else
		printf("최대값은 %d입니다", num2);

	return 0;
}