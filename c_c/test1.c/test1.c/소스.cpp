#include <stdio.h>
#include <stdlib.h>
int main() {
	int* score;
	int num;
	int i;
	int total = 0;
	printf("성적을 입력할 학생의 수 : ");
	scanf("%d", &num);
	score = (int*)malloc(sizeof(int) * num); //malloc()
	//score = (int*)calloc(sizeof(int),num); calloc()
	for (i = 0; i < num; i++) {
		printf("%d번 학생의 성적 : ", i + 1);
		scanf_s("%d", &score);
		total += score[i];
	}
	double mean = total / (double)num;
	printf("총점 : %d, 평균 : %lf\n", total, mean);
	free(score);
	return 0;
}
