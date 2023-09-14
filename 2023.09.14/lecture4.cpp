#include <stdio.h>

int main(void)
{
	int a, b, c, val1, val2, val3, val4, val5;
	a = 3, b = 0, c = 19;

	val1 = a && b;
	val2 = a || c;
	val3 = (a > b) && (a < c);
	val4 = !val3;
	val5 = b && c;
	
	printf("a=3,b=0,c=8ÀÏ ¶§\n");
	printf("1. a && b:%d\n", val1);
	printf("2. a || c:%d\n", val2);
	printf("3. (a > b) && (a < c):%d\n", val3);
	printf("4. !val3:%d\n", val4);
	printf("5.b&&c:%d\n", val5);

	return 0;
}