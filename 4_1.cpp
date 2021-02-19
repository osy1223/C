#include <stdio.h>

int main(void) {

	int oprand1 = 6;
	int oprand2 = 3;

	int sum = (oprand1 + oprand2);
	int sub = oprand1 - oprand2;
	int mul = oprand1 * oprand2;
	int div = oprand1 / oprand2;

	printf("%3d + %3d = %5d \n", oprand1, oprand2, sum);
	printf("%3d - %3d = %5d \n", oprand1, oprand2, sub);
	printf("%3d * %3d = %5d \n", oprand1, oprand2, mul);
	printf("%3d / %3d = %5d \n", oprand1, oprand2, div);

	double a = 5 / 3 ;
	double b = 5 / 3. ;
	double c = 5.0 / 3. ;
	double d = 5.0 / 3.0 ;

	printf("%f \n", a);
	printf("%f \n", b);
	printf("%f \n", c);
	printf("%f \n", d);;

	int num1 = 5;
	int num2 = 3;

	int hap = num1 + num2;
	int minus = num1 - num2;
	int gob = num1 * num2;
	double nanugi = num1 / (double) num2;

	printf("%3d + %3d = %3d \n", num1, num2, hap);
	printf("%3d - %3d = %3d \n", num1, num2, minus);
	printf("%3d * %3d = %3d \n", num1, num2, gob);
	printf("%3d / %3d = %3f \n", num1, num2, nanugi);

	int i = 3.14;
	double j = 3;

	printf("%d \n", i);
	printf("%f \n", j);

	return 0;
}