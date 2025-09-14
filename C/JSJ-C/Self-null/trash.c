#include <stdio.h>
//3차원 배열. 강좌, 학생, 과목.
//Input() 함수: 학생 n번의 과목 점수 순서대로 입력받기.
//Calc() 함수: 강좌별 중간, 기말의 평균 계산하기.

#define TRD 2
#define ROW 3
#define COL 3

char* student[COL] = { "영어", "수학", "국어"};
int static rRow = ROW - 1; //조건문에 사용함. 동시에 과목별 성적의 합이 들어가는 인덱스.

int score[TRD][ROW][COL];
void Input(), Calc(), Output(); //전역변수와 배열, 상수를 사용하므로 반환값이 없는 void 사용.


int main(void) {
	printf("성적 입력 프로그램. 강좌, 학생, 과목 순서대로 입력\n\n");
	Input();
	Calc();
	Output();
}

void Input() { //문자열 배열을 이용해 과목을 모두 출력하고, 동시에 점수를 입력받음.
	for (int i = 0; i < TRD; i++) {
		printf("강좌 %d 성적 입력 ->\n", i+1);
		for (int o = 0; o < rRow; o++) {
			printf("학생 %d ", i+1);
			for (int stu = 0; stu < COL; stu++)
				printf("%s ", student[stu]);
			printf("점수 입력 : ");
			for (int p = 0; p < COL; p++)
				scanf_s("%d", &score[i][o][p]);
		}
		printf("\n");
	}
	printf("성적 입력 끝!!\n\n");
}

void Calc() { //조건문은 < rRow이므로 제외한다는 의미. 인덱스는 0부터 시작하므로 rRow를 그대로 사용.
	for (int i = 0; i < TRD; i++) {
		for (int o = 0; o < rRow; o++) {
			for (int p = 0; p < COL; p++) {
				score[i][rRow][p] += score[i][o][p];
			}
		}
	}
}

void Output() { //배열 출력으로 바꿔야 함.
	for (int i = 0; i < TRD; i++) {
		printf("[강좌 %d]   영어  수학 국어\n", i + 1);
		for (int o = 0; o < rRow; o++) {
			printf("학생 %d   ", o + 1);
			for (int p = 0; p < COL; p++) { //각 과목의 점수 나열
				printf("%5d", score[i][o][p]);
			}
			printf("\n");
		}
		for (int o = 0; o<COL; o++) //for문을 사용해 표가 일정하게 출력되도록 함.
			printf("-----------");
		printf("\n평균    ");
		for (int o = 0; o < COL; o++)
			printf("%5.1lf ", (double)score[i][rRow][o] / rRow); //형변환과 평균값을 printf에서 수행
		printf("\n\n");
	}
}