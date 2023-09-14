#include <stdio.h>

int main()
{
	int val_1, val_2, a, b;

	printf("a=10, b=15일 때\n");

	a = 10;
	b = 15;
	val_1 = ++a + b--;//전위:문장 시작 전 후위 : 문장 끝 후

	printf("1.val_1 = ++a + b-- = %d, a = %d,b = %d\n", val_1, a, b);
	return 0;
}