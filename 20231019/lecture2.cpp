#include <stdio.h>
#include <stdlib.h>

struct Student {
	int sno;
	char name[10];
	int score;
};
int main() {
	int num;
	struct Student* s;
	
	printf("�л��� �Է� : ");
	scanf_s("%d", &num);
	s = (struct Student*)malloc(num * sizeof(struct Student));

	for (int i = 0; i < num; i++) {
		printf("�л�# %d-%d �й� �Է� : ", num, i + 1);
		scanf_s("%d", &(s[i].sno));
		printf("�л�# %d-%d �̸� �Է� : ", num, i + 1);
		scanf_s("%d", &s[i].name,10);
		printf("�л�# %d-%d ���� �Է� : ", num, i + 1);
		scanf_s("%d", &(s[i].score);
	}
	int sum = 0;
	for (int i = 0; i < num; i++) {
		sum += s[i].score;
	}
	free(score);
	return 0;
}