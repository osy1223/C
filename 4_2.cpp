#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int x, y;

	printf("ù��° ���� ? ");
	scanf("%d", &x);
	printf("�ι�° ����? ");
	scanf("%d", &y);

	printf("ū �� = %d \n", (x > y) ? x : y);
	printf("���� �� = %d \n", (x < y) ? x : y);



	/*
	int x = 2, y = 4;

	printf("2���� ������ �Է��Ͻÿ� ::");
	scanf("%d", &x);
	scanf("%d", &y);

	printf("%d==%d�� ��� : %d \n",x,y, x == y);
	printf("%d!=%d�� ��� : %d \n",x,y, x != y);
	printf("%d>%d�� ��� : %d \n",x,y, x > y);
	printf("%d<%d�� ��� : %d \n",x,y, x < y);
	printf("%d>=%d�� ��� : %d \n",x,y, x >= y);
	printf("%d<=%d�� ��� : %d \n",x,y, x <= y);



	printf("==============\n");
	printf("x = %d \n", x);
	printf("++x = %d \n", ++x); //x+1 ���
	printf("x=%d \n", x);
	printf("==============\n");
	printf("==============\n");
	printf("y = %d \n", y);
	printf("y++ = %d \n", y++); //y ���
	printf("y = %d \n", y); //y+1 ���
	printf("==============\n");




	printf("���������� \n");
	printf("============= \n");
	printf("a = %d, b =%d \n", a, b);
	printf("x = %d, y = %d \n", x, y);

	printf("============= \n");
	printf("%d , %d\n", a, b);

	int i, j;
	i = a++;
	j = b--;
	printf("���������� \n");
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