#include <stdio.h>

int main(void) {

	int var1;
	int var2;

	printf("���� 2���� �Է� �޾� +, -, *, / �� ����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�(�������� �Ҽ��� ��°�ڸ����� ����� ��)\n\r");

	printf("1��° ���� �Է�\n");
	scanf("%d", &var1);

	printf("2��° ���� �Է�\n");
	scanf("%d", &var2);

	printf("%d+%d=%d\n", var1, var2, var1 + var2);
	printf("%d-%d=%d\n", var1, var2, var1 - var2);
	printf("%d*%d=%d\n", var1, var2, var1 * var2);
	printf("%d/%d=%.2f\n", var1, var2, (float)var1 / (float)var2);


	return 0;

}