#include <stdio.h>
#include <stdlib.h>
int main() {
	int* score;
	int num;
	int i;
	int total = 0;
	printf("������ �Է��� �л��� �� : ");
	scanf("%d", &num);
	score = (int*)malloc(sizeof(int) * num); //malloc()
	//score = (int*)calloc(sizeof(int),num); calloc()
	for (i = 0; i < num; i++) {
		printf("%d�� �л��� ���� : ", i + 1);
		scanf_s("%d", &score);
		total += score[i];
	}
	double mean = total / (double)num;
	printf("���� : %d, ��� : %lf\n", total, mean);
	free(score);
	return 0;
}
