#include <stdio.h>

int main(void)
{
	int year;

	printf("�⵵�� �Է��Ͻÿ� : ");
	scanf_s("% d", &year);

	int yun = (year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0);

	if (yun)
		printf("����\n");
	else
		printf("����x");
	return 0;
}