#include <stdio.h>

int main()
{
	int a;
	scanf_s("%d", &a);

	if (a > 0)
		printf("%d�� ���� ���� �Դϴ�.\n", a);
	else if (a < 0)
		printf("%d�� ���� ���� �Դϴ�.\n", a);
	else
		printf("%d�� 0�Դϴ�.\n", a);
		
	return 0;
}