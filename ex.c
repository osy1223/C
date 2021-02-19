#include <stdio.h>

int main(void) {
	int x;

	printf("변수 x의 크기 : %d \n", sizeof(x));
	printf("값 10의 크기 : %d \n", sizeof(10));
	printf("자료형 int의 크기 : %d \n", sizeof(int));

	return 0;
}