#include <stdio.h>
int calculator(int sel, int num1, int num2);

int main(void)
{
	int sel, num1, num2;
	printf("1.���ϱ� 2.���� 3.���ϱ� 4.������");
	scanf_s("%d", &sel);

	printf("���� 1�� �Է��Ͻÿ� : ");
	scanf_s("%d", &num1);
	printf("���� 2�� �Է��Ͻÿ� : ");
	scanf_s("%d", &num2);

	printf("%d", calculator(sel, num1, num2);
	return 0;
}

int calculator(int sel, int num1, int num2) {
	if (sel == 1) return num1 + num2;
	else if (sel == 2) return num1 - num2;
	else if (sel == 3)return num1 * num2;
	else return num1/num2
}