#include <stdio.h>

int main()
{
	int a;
	scanf_s("%d", &a);

	if (a > 0)
		printf("%d는 양의 정수 입니다.\n", a);
	else if (a < 0)
		printf("%d는 음의 정수 입니다.\n", a);
	else
		printf("%d는 0입니다.\n", a);
		
	return 0;
}