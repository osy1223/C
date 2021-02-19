#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int x, y;

	printf("첫번째 수는 ? ");
	scanf("%d", &x);
	printf("두번째 수는? ");
	scanf("%d", &y);

	printf("큰 수 = %d \n", (x > y) ? x : y);
	printf("작은 수 = %d \n", (x < y) ? x : y);



	/*
	int x = 2, y = 4;

	printf("2개이 정수를 입력하시요 ::");
	scanf("%d", &x);
	scanf("%d", &y);

	printf("%d==%d의 결과 : %d \n",x,y, x == y);
	printf("%d!=%d의 결과 : %d \n",x,y, x != y);
	printf("%d>%d의 결과 : %d \n",x,y, x > y);
	printf("%d<%d의 결과 : %d \n",x,y, x < y);
	printf("%d>=%d의 결과 : %d \n",x,y, x >= y);
	printf("%d<=%d의 결과 : %d \n",x,y, x <= y);



	printf("==============\n");
	printf("x = %d \n", x);
	printf("++x = %d \n", ++x); //x+1 출력
	printf("x=%d \n", x);
	printf("==============\n");
	printf("==============\n");
	printf("y = %d \n", y);
	printf("y++ = %d \n", y++); //y 출력
	printf("y = %d \n", y); //y+1 출력
	printf("==============\n");




	printf("전위연산결과 \n");
	printf("============= \n");
	printf("a = %d, b =%d \n", a, b);
	printf("x = %d, y = %d \n", x, y);

	printf("============= \n");
	printf("%d , %d\n", a, b);

	int i, j;
	i = a++;
	j = b--;
	printf("후위연산결과 \n");
	printf("============= \n");
	printf("a = %d, b =%d \n", a, b);
	printf("x = %d, y = %d \n", i, j);

	printf("============= \n");
	printf("%d , %d\n", a, b);

	int d, e;
	d = ++a;
	e = b++;
	printf("============= \n");
	printf("a = %d, b =%d \n", a, b);
	printf("x = %d, y = %d \n", d, e);
	*/

	return 0;
}