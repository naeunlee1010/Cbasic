#include <stdio.h>

int main() {
	
	int num,rest,i=0,sum=0;

	printf("임의의 정수를 입력하시오:");
	scanf_s("%d", &num);
	printf("입력값:%d\n",num);

	while (num >= 1) {
		
		rest = num % 10;  //12345> 1234
		num = num / 10;//12345  > 5
		sum = sum + rest;
		i++;

		//sum=sum+(num%10)
		//if (num == 0) break;
		//num = num/10
		//count++
	}
	
	printf("정수의 자리수:%d\n", i);
	printf("각 자리의 합:%d",sum);

	return 0;
}