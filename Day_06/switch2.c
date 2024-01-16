//switch 문의 한계
//값이 일치하는 조건만 가능 -> 부등식은 안 됨
//switch문의 ()변수 1개만 되고, 정수타입(int,char)만 가능

#include <stdio.h>

int main() {

	int a = 1;
	if (a == 1) printf("일");
	else if (a > 3) printf("3이상");

	switch (a) {

	case 1:
		print("일");
	}
	//case 1.5: (x)

	char c = 'a';
	switch (c) {
	case 'a': print("가능");
	//case "apple" (x)
	}//문자는 ''로 구분, 문자열은 ""로 구분
	return 0;
}