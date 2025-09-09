#include <stdio.h>

//배열요소 비교 예제, 함수 베이스
//void Input(double num[], int n);
//double Calc(double num[], int n);
//
//int main(void) {
//	double num[5];
//
//	printf("값 5개 입력: ");
//
//	Input(num, 5);
//	double max = Calc(num, 5);
//
//	printf("가장 큰 값: %.1lf", max);
//}
//
//void Input(double num[], int n) {
//	for (int i = 0; i < n; i++) {
//		scanf_s("%lf", &num[i]);
//	}
//}
//
//double Calc(double num[], int n) {
//	int max = num[0];
//	for (int i = 0; i < n; i++) {
//		if (max < num[i]) max = num[i];
//	}
//	return max;
//}


//배열요소 비교 예제
//int num[5];
//int max;
//
//int main(void) {
//	printf("값 5개 입력: ");
//
//	for (int i = 0; i < 5; i++) {
//		scanf_s("%d", &num[i]);
//	}
//	max = num[0];
//
//	for (int i = 1; i < 5; i++) {
//		if (max < num[i]) max = num[i];
//	}
//
//	printf("가장 큰 값은: %d", max);
//}

//함수+배열(=포인터) 간단 예제
//int Ba(int num[]);
//
//int main(void) {
//	int num[1];
//	num[0] = 5;
//
//	int re = Ba(num);
//	printf("결과: %d", re);
//}
//
//int Ba(int num[]) {
//	printf("num 값: %d\n", num[0]);
//	int re = num[0] + 5;
//	return re;
//}

//함수예제2
//int Add(int, int);
//
//int main(void) {
//	printf("\n10 + 20 = %d", Add(10, 20));
//}
//
//int Add(int a, int b) {
//	int to = a + b;
//	return to;
//}

//함수예제
//int Add(int, int);
//int ab[2];
//
//int main(void) {
//	printf("숫자 2개 입력: ");
//	scanf_s("%d %d", &ab[0], &ab[1]);
//	int to = Add(ab[0], ab[1]);
//	printf("\n결과: %d", to);
//}
//
//int Add(int a, int b) {
//	int to = ab[0] + ab[1];
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