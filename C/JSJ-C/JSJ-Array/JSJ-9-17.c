#include <stdio.h>

//교재 404~406페이지
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(void) {
	long sec = (long)time(NULL);
	srand(sec);

	printf("1 ~ %5d 사이의 난수 8개: \n", MAX);
	for (int i = 0; i < 8; i++)
		printf("%3d ", rand() % MAX + 1);
	puts("");
}

//미완성.
//#define ROW 2
//#define COL 3
//
//int num[ROW][COL];
//void Input(int);
//int Calc(int), Output(int);
//
//
//int main(void) {
//	int sum1 = 0, sum2 = 0;
//	printf("6개의 데이터 입력 : ");
//	Input(num);
//
//	printf("합: %d, 평균: %.lf\n"); //Calc(), sum1, sum2
//	printf("반복문 for를 사용하여 출력\n");
//	Output(num);
//}
//
//void Input(int arr[][COL]) {
//	for (int i = 0; i < ROW; i++) {
//		for (int o = 0; o < COL; o++)
//			scanf_s("%d", arr[i][o]);
//	}
//}



//정석: 배열이랑 상수 받아서 계산이랑 출력 다 해야함. 2번문제
//#define NUM 5
//void Input(), Sum();
//double data[NUM];
//double su[1] = {0};
//
//int main(void) {
//	printf("데이터 5개를 입력: ");
//	Input();
//	printf("\n\n");
//
//	for (int i = 0; i < NUM; i++)
//		printf("%2.1lf", (double)data[i]);
//	printf("\n");
//
//	Sum();
//	printf("합: %.1lf", su[0]);
//}
//
//void Input() {
//	for (int i = 0; i < NUM; i++)
//		scanf_s("%lf", data[i]);
//}
//
//void Sum() {
//	for (int i = 0; i < NUM; i++)
//		su[0] += data[i];
//	su[0] = su[0] / NUM;
//}

//1번문제.
//double Area(double), Cir(double);
//
//int main() {
//	double half;
//
//	printf("원의 반지름 입력: ");
//	scanf_s("%lf", &half);
//	printf("\n");
//
//	printf("반지름 %.2lf인 원의 면적: %.3lf\n", half, Area(half));
//	printf("반지름 %.2lf인 원의 둘레: %.3lf\n", half, Cir(half));
//
//	return 0;
//}
//
//double Area(double half) {
//	double sum = 3.14 * half * half;
//	return sum;
//}
//
//double Cir(double half) {
//	double sum = 2 * 3.14 * half;
//	return sum;
//}

//void mes();
//
//int main() {
//	puts("main함수 시작");
//	mes();
//	return 0;
//}
//
//void mes() {
//	puts("\t메시지입니다");
//} //t는 탭 하나를 의미함


//int main(void) {
//	char num = 0;
//	//문자나 문자열을 나타낼때는 3번째 매개변수로 변수의 크기 필요
//	scanf_s("%c", &num, 2);
//	printf("출력 %c", num);
//}