#include <stdio.h>

int main() {
	
	int num,rest,i=0,sum=0;

	printf("������ ������ �Է��Ͻÿ�:");
	scanf_s("%d", &num);
	printf("�Է°�:%d\n",num);

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
	
	printf("������ �ڸ���:%d\n", i);
	printf("�� �ڸ��� ��:%d",sum);

	return 0;
}