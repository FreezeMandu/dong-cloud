#include <stdio.h>

//배열예제
//int main(void) {
//	int i;
//	double age[3], to = 0, avg;
//
//	printf("3명의 나이 입력: ");
//	for (i = 0; i < 3; i++) {
//		scanf_s("%lf", &age[i]);
//		to += age[i];
//	}
//
//	avg = to / 3.0;
//	printf("합계: %.1lf\n", to);
//	printf("3명 나이 평균: %.1lf", avg);
//}

//input, output, avg 함수 선언! main에서는 실행 담당
void Input2(int, int), Output(int, double);
int NumInput(int);
double Avg(double), avg = 0, to = 0;
int num[] = {0}, i, anum = 0;

int main(void) {

	NumInput(anum);
	Input2(num[anum], anum);
	Avg(num[anum]);
	Output(anum, avg);
}

int NumInput(int anum) {
	printf("몇 개의 숫자를 입력하시겠습니까? (최대 10개) : ");
	scanf_s("%d", &anum);
	printf("\n%d 입력했습니다.", anum); //log
	return anum;
}

void Input2(int num[], int anum) {

	printf("\n\n숫자 %d개 입력: ", anum);
	if (anum <= 10) { //스파게티 코드의 for 안전장치
		for (i = 0; i < anum; i++) {
			scanf_s("%d", &num[i]);
		}
	}
	else {
		printf("Input2 함수 오류!");
	}
}


double Avg(double avg) {
	for (i = 0; i < anum; i++) {
		to += num[i];
	}
	avg = to / anum;
	return avg;
	printf("\nAvg 함수 실행됨"); //log
}

void Output(int anum, double avg) {
	printf("\n숫자 %d개의 평균은 %.1lf입니다.", anum, avg);
}