#include <stdio.h>

int main()
{
	int j;
	printf("점수를 입력하시오 : ");
	scanf_s("%d", &j);

	if (j > 100 || j < 0)
		printf("잘못 입력");
	else if (j >= 90)
		printf("A\n");
	else if (j >= 80)
		printf("B\n");
	else if (j >= 70)
		printf("C\n");
	else if (j >= 60)
		printf("D\n");
	else if (j < 60)
		printf("F\n");
	else
		printf("F");

	return 0;
}