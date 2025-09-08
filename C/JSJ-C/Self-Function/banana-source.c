#include <stdio.h>

int in[4];
void Input();
int Calc(int in[4]);
double Avg(int);

int main(void) {
	double avg;
	int total;

	printf("값 4개를 입력하시오: ");

	Input(in);
	total = Calc(in);
	avg = Avg(total);

	printf("\n평균값은 %.1lf입니다", avg);
}

void Input(int in[]) {
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &in[i]);
	}
}

int Calc(int in[]) {
	int to = 0;
	for (int i = 0; i < 4; i++) {
		to += in[i];
	}
	printf("\n[Calc] %d 계산됨", to);
	return to;
}

double Avg(int total) {
	double avg = 0;
	avg = total / 4.0;
	printf("\n[Avg] %.1lf 계산됨", avg);
	return avg;
}