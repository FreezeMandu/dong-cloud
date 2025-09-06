#include <stdio.h>

//함수예제
//int Calc(int, int);
//int a, b, to = 0;
//
//int main(void) {
//
//	printf("숫자 2개 입력: ");
//	scanf_s("%d %d", &a, &b);
//
//	Calc(a, b);
//	printf("\n합: %d", to);
//}
//
//int Calc() {
//	to = a + b;
//	return to;
//}

//포인터예제
//
//int main(void) {
//  double* p_num = 0;
//  double avg = 0, to = 0;
//	double a, b;
//	p_num = &to;
//
//	printf("숫자 2개 입력 ");
//	scanf_s("%lf %lf", &a, &b);
//
//	printf("\n[main] %.1lf, %.1lf 입력됨", a, b);
//
//	to = a + b;
//	printf("\n[main] 합 %.1lf", to);
//
//	avg = *p_num / 2.4;
//	printf("\n[main] 나눔 %.2lf", avg);
//
//}

//배열예제
//int main(void) {
//	int i;
//	double age[3], to=0, avg;
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