#include <stdio.h>

int main(void) {

	int var1;
	int var2;

	printf("정수 2개를 입력 받아 +, -, *, / 를 계산하여 출력하는 프로그램을 작성하시오(나눗셈은 소수점 두째자리까지 출력할 것)\n\r");

	printf("1번째 정수 입력\n");
	scanf("%d", &var1);

	printf("2번째 정수 입력\n");
	scanf("%d", &var2);

	printf("%d+%d=%d\n", var1, var2, var1 + var2);
	printf("%d-%d=%d\n", var1, var2, var1 - var2);
	printf("%d*%d=%d\n", var1, var2, var1 * var2);
	printf("%d/%d=%.2f\n", var1, var2, (float)var1 / (float)var2);


	return 0;

}