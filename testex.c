/* printf() scanf() 연습 */
/* 2021-02-09 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int iData = 0;

	printf("정수 하나 입력 하세요");
	scanf("%d", &iData);
	printf("입력한 정수 : %d", iData);

	printf("%d %d %d\n", 1, 2, 3);

	printf("%d", 3/2);
	printf("\n\n\n\n");

	printf("%f", 3/2.0);
	printf("\n\n\n\n");

	printf("%d", 1+2);
	printf("\n\n\n\n");

	printf("%8d \n", 12345);
	printf("%8d \n", 12345*1000);
	printf("%08d \n", 12345);
	printf("\n\n\n\n");

	printf("%f \n", 3 / 2.0);
	printf("%.2f \n", 3 / 2.0);

	printf("\n\n\n\n");
	printf("%f \n", 12.34567);
	printf("%.2f\n", 12.345678);
	printf("%8.2f \n", 12.345678);

	printf("%8d\n", 123);
	printf("%8.4d\n", 123);

	return 0;
}