#include <stdio.h>
//#define EX_RATE 1120

int main(void) {

	//���� ���� �� �ʱ�ȭ
	const int EX_RATE = 1120;
	int    iData =50;
	double dData =7.7;
	char   ch ='A'; //""�� �ȵǿ�

	printf("iData =%8d \n", iData);
	printf("dData =%8.2f \n", dData);
	printf("ch =%8c \n", ch);

	/* 10����, 8����, 16���� ����*/
	int x = 10; //10����
	int y = 010; //8����
	int z = 0x10; //16����

	printf("x =%8d \n", x);
	printf("y =%8d \n", y);
	printf("z =%8d \n", z);

	printf("%d =%d(%d) \n", x,x,10);
	printf("%d =%o(%d) \n", x,x,8);
	printf("%d =%x(%d) \n", x,x,16);



	int dollor1 = 10;
	int dollor2 = 100;
	int dollor3 = 1000;

	int won1 = EX_RATE * dollor1;
	int won2 = EX_RATE * dollor2;
	int won3 = EX_RATE * dollor3;

	printf("%d��=%d�޷�\n",won1, dollor1);
	printf("%d��=%d�޷�\n", won2, dollor2);
	printf("%d��=%d�޷�\n", won3, dollor3);


	return 0;
}