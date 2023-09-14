#include <stdio.h>

int main(void)
{
	int year;

	printf("년도를 입력하시오 : ");
	scanf_s("% d", &year);

	int yun = (year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0);

	if (yun)
		printf("윤년\n");
	else
		printf("윤년x");
	return 0;
}