#include <stdio.h>

#define ROW 4

int main(void) {
	int score[ROW][3];
	double eng = 0, math = 0, avg = 0;
	double student[ROW];

	printf("�� �л��� ���� ������ ���� ������ �Է��ϼ���\n");

	for (int i = 0; i < ROW; i++) {
		score[i][0] = i + 1;
	}

	for (int i = 0; i < ROW; i++) {
		printf("%d�� �л��� ���� ����: ", i + 1);
		scanf_s("%d", &score[i][1]);
		eng += score[i][1];
		printf("%d�� �л��� ���� ����: ", i + 1);
		scanf_s("%d", &score[i][2]);
		math += score[i][2];

		student[i] = (score[i][1] + score[i][2]) / 2;
	}
	printf("\n");
	printf("==============================================\n");
	printf("��ȣ   ����   ����  �л����\n");
	printf("==============================================\n");
	for (int i = 0; i < ROW; i++)
		printf("%3d %6d %6d %7.1lf\n", score[i][0], score[i][1], score[i][2], student[i]);
	printf("==============================================\n");
	printf("����: %6.1lf %6.1lf\n", eng, math);
	printf("���: %6.1lf %6.1lf", eng / ROW, math / ROW);
}