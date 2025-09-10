#include <stdio.h>

double Calc(double, double);

int main(void) {
	double n1, n2, sum;

	printf("실수 2개 입력: ");
	scanf_s("%lf %lf", &n1, &n2);
	sum = Calc(n1, n2);

	printf("결과: %.2lf", sum);
}

double Calc(double n1, double n2) {
	return n1 + n2;
}

//함수 간단예제
//double tot(double, double, double);
//
//int main(void) {
//	double n1 = 10.2, n2 = 20.2, n3 = 30.2;
//	double sum = 0;
//	sum = tot(n1, n2, n3);
//	printf("합은 %.2lf 입니다.", sum);
//}
//
//double tot(double n1, double n2, double n3) {
//	double sum = n1 + n2 + n3;
//	return sum; 
//	// 함수의 리턴타입과 리턴하려는 변수의 형식 일치
//}

//2차원배열
//#define ROW 4
//#define COL 2
//
//int main(void) {
//	int sum = 0, midSum = 0, finSum = 0;
//	int nums[ROW][COL];
//
//	printf("ah: ");
//	for (int i = 0; i < ROW; i++) {
//		for (int j = 0; j < COL; j++) {
//			scanf_s("%d", &nums[i][j]);
//		}
//	}
//
//	puts("");
//
//	printf("      중간     기말\n");
//	printf("--------------------\n");
//	for (int i = 0; i < ROW; i++) {
//		for (int j = 0; j < COL; j++) {
//			printf("%9d", nums[i][j]);
//			sum += nums[i][j];
//			if (j == 0) midSum += nums[i][j];
//			else finSum += nums[i][j];
//		}
//		printf("\n");
//	}
//	printf("--------------------\n");
//	printf("평균: %.2lf   %.2lf\n", (double)midSum / COL, (double)finSum / COL);
//	printf("성적의 합은 %.2lf이고 평균은 %.2lf입니다.", (double)sum, (double)sum / (ROW * COL));
//}

//예제 8-3
//#define ROW 2
//#define COL 3
//
//int main(void) {
//	int nums[ROW][COL];
//
//	printf("숫자 6개 입력: ");
//	for (int i = 0; i < ROW; i++) {
//		for (int j = 0; j < COL; j++)
//			scanf_s("%d", &nums[i][j]);
//	}
//
//	printf("\nfor를 이용하여 출력\n");
//	for (int i = 0; i < ROW; i++) {
//		for (int j = 0; j < COL; j++)
//			printf("nums[%d][%d] = %d ", i, j, nums[i][j]);
//		printf("\n");
//	}
//}

//예제 8-2
//#define SIZE 6
//int main(void) {
//	int num[SIZE] = {0};
//	int sum = 0;
//
//	printf("숫자 6개 입력: ");
//	for (int i = 0; i < SIZE; i++) {
//		scanf_s("%d", &num[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < SIZE; i++) {
//		sum += num[i];
//		printf("num[%d] = %d\n", i, num[i]);
//	}
//	printf("\n성적의 합은 %d이고 평균은 %d이다\n", sum, sum / SIZE);
//}
