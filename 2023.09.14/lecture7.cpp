#include <stdio.h>

int main()
{
	int j;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &j);

	if (j > 100 || j < 0)
		printf("�߸� �Է�");
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