#include <stdio.h>
//2�� for ����, �� ������ ��� ���, ���� ���. 2���� �迭�� ����/����
#define ROW 4
#define COL 2

int go[ROW][COL];
void Input(int go[ROW][COL]);
double Calc(int go[ROW][COL]);
double Output();
static double stSum = 0, ndSum = 0, finSum = 0;

int main(void) {

	printf("���� 8���� �Է�: ");
	Input(go);
	Calc(go);
	Output();
}

void Input(int go[ROW][COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			scanf_s("%d", &go[i][j]);
		}
	}
}

double Calc(int go[ROW][COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			finSum += go[i][j];
			if (j == 0) { stSum += go[i][j]; }
			else { ndSum += go[i][j]; }

		}
	}
	return 0;
}

double Output() {
	printf("	�߰�	�⸻  \n");
	printf("-------------------\n");
	for (int i = 0; i < ROW; i++) {
		printf("	%d", go[i][0]);
		printf("	%d\n", go[i][1]);
	}
	printf("--------------------\n");
	printf("���:  %2.2lf   %2.2lf\n", stSum / ROW, ndSum / ROW);
	printf("������ ���� %.2lf�̰� ����� %.2lf�̴�", finSum, finSum / (ROW * COL));
	return 0;
}
