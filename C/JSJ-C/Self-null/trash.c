#include <stdio.h>

#define ROW 4

int main(void) {
	int score[ROW][3];
	double eng = 0, math = 0, avg = 0;
	double student[ROW];

	printf("각 학생의 영어 점수와 수학 점수를 입력하세요\n");

	for (int i = 0; i < ROW; i++) {
		score[i][0] = i + 1;
	}

	for (int i = 0; i < ROW; i++) {
		printf("%d번 학생의 영어 점수: ", i + 1);
		scanf_s("%d", &score[i][1]);
		eng += score[i][1];
		printf("%d번 학생의 수학 점수: ", i + 1);
		scanf_s("%d", &score[i][2]);
		math += score[i][2];

		student[i] = (score[i][1] + score[i][2]) / 2;
	}
	printf("\n");
	printf("==============================================\n");
	printf("번호   영어   수학  학생평균\n");
	printf("==============================================\n");
	for (int i = 0; i < ROW; i++)
		printf("%3d %6d %6d %7.1lf\n", score[i][0], score[i][1], score[i][2], student[i]);
	printf("==============================================\n");
	printf("총점: %6.1lf %6.1lf\n", eng, math);
	printf("평균: %6.1lf %6.1lf", eng / ROW, math / ROW);
}