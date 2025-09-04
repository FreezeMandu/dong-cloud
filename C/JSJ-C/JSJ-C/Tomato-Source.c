#include <stdio.h>

//배열예제
int main(void) {
	int i;
	double age[3], to=0, avg;

	printf("3명의 나이 입력: ");
	for (i = 0; i < 3; i++) {
		scanf_s("%lf", &age[i]);
		to += age[i];
	}

	avg = to / 3.0;
	printf("합계: %.1lf\n", to);
	printf("3명 나이 평균: %.1lf", avg);
}

//나이예제
//int main(void) {
//	int a, b, c, to;
//	double avg;
//
//	printf("3명 나이 입력: ");
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	to = a + b + c;
//	avg = to / 3;
//
//	printf("3명 나이 평균: %.1lf", avg);
//}