#include <stdio.h>
//확장자가 .h:헤더파일
//헤더파일: 함수들 또는 심볼릭 상수들이 정의된 파일
//#:전처리기(preprocessor)
//include:헤더파일을 포함시키는 예약어(keyword)
//stdio.h:표준입출력에 관련된 함수들이 정의된 헤더파일
/*  
#include "" : 사용자정의 헤더파일을 include 할때는 "" 사용
              표준 라이브러리 함수를 include 할 때는 <>사용*/
 
int main() {

	printf("hello world!!\n");
	//()안의 문자열을 콘솔에 출력하는 함수
	//" ":문자열을 구분하는 기호
	//함수의 ()안에 들어간 것들:인수 또는 인자
	return 0;
}