#include <stdio.h>

//input, output, avg 함수 선언! main에서는 실행 담당
void Input(int num[5]);
int Calc(int num[5]);
double Avg(double);
int* p_to;


int main(void) {
	int num[5] = {0};
	int to;
	p_to = &to;
	double avg;

	printf("숫자 5개를 입력하시오: ");

	Input(num); //입력 활성화 후 값을 1개라도 집어넣으면 강제 종료됨!

	for (int i = 0; i < 5; i++) {
		printf("\n[main] 배열 값 %d", num[i]); //num[5] log
	}

	to = Calc(num);
	avg = Avg(to);

	printf("\n\n숫자 5개의 평균: %.2lf", avg);
}

void Input(int num[5]) {
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &num[i]);
	}
}

int Calc(int num[5]) {
	int to = 0;
	for (int i = 0; i < 5; i++) {
		to += num[i]; //void 안에 있는거 어떻게 가져올지 고민하시오
	}
	return to;
}

double Avg(double avg) {
	avg = *p_to / 5;
	return avg;
}