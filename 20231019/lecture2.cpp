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
	
	printf("학생수 입력 : ");
	scanf_s("%d", &num);
	s = (struct Student*)malloc(num * sizeof(struct Student));

	for (int i = 0; i < num; i++) {
		printf("학생# %d-%d 학번 입력 : ", num, i + 1);
		scanf_s("%d", &(s[i].sno));
		printf("학생# %d-%d 이름 입력 : ", num, i + 1);
		scanf_s("%d", &s[i].name,10);
		printf("학생# %d-%d 성적 입력 : ", num, i + 1);
		scanf_s("%d", &(s[i].score);
	}
	int sum = 0;
	for (int i = 0; i < num; i++) {
		sum += s[i].score;
	}
	free(score);
	return 0;
}