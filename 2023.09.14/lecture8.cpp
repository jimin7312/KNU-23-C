#include <stdio.h>

int main()
{
	int a;
	scanf_s("%d", &a);
	
		if (a > 100 || a < 0)
			printf("잘못 입력.\n");
			return 0;
	int ad = a/10;

	switch (ad) {
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	case 5:
		printf("F\n");
		break;
	}
		return 0;
}