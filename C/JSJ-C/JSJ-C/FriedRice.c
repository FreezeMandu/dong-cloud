#include <stdio.h>

//2차원배열, 성적프로그램 *변형* 학생평균 추가.
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

//막대그래프예제 2-1
//int main(void) {
//	int nums[5] = { 30,20,10,40,50 };
//
//	for (int i = 0; i < 5; i++) {
//		int relay = nums[i];
//		printf("번호[%d]의 값 %d: ", i, relay);
//		for (int j = 1; j < relay; j++) {
//			printf("*");
//		}
//		puts("");
//	}
//}

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