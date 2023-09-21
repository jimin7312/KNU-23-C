#include <stdio.h>
int isPrime(int num)
{
	for (int div = num - 1; div > 1; div--)
	{
		if (num % div == 0) return 0;
	}
	return 1;
}
int main()
{
	int num;
	scanf_s("%d", &num);
	printf("%d\n", isPrime(num));
	if (num == 1)
	printf("소수");
	else
		printf("소수X");
	return 0;
}