#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	int* scores;
	printf("�л��� �Է� : ");
	scanf_s("%d", &num);
	scores = (int*)malloc(num * sizeof(int));
	
	for (int i = 0; i < num; i++) {
		printf("�л�# %d-%d ���� �Է� : ", num, i + 1);
		scanf_s("%d", scores + i);
	}
	int sum = 0;
	for (int i = 0; i < num; i++) {
		sum += scores+i;
	}
	free(scores);
	return 0;
}