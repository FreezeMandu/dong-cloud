#include <stdio.h>

//3차원 배열. 강좌, 학생, 과목.
//Input() 함수: 학생 n번의 과목 점수 순서대로 입력받기.
//Calc() 함수: 강좌별 중간, 기말의 평균 계산하기.
//Output() 함수: 평균값을 계산하여 바로 출력하기.

#define TRD 2
#define ROW 3 //강좌(TRD)와 학생(ROW) 수는 입력 값에 따라 자동으로 생성됨.
#define COL 3 //과목(COL) 수를 수정할 경우 바로 밑 student 배열도 같이 수정해줘야 함.

char* student[COL] = { "영어", "수학", "국어" }; //문자'열'을 저장하려면 *로 포인터 선언을 해줘야 한다고 하더라~
int static rRow = ROW - 1; //조건문에 사용함. 동시에 과목별 성적의 합이 들어가는 인덱스.

int score[TRD][ROW][COL];
void Input(), Calc(), Output(); //포인터인 배열과 상수를 사용하므로 반환값이 없는 void 사용.


int main(void) {
	printf("성적 입력 프로그램. 강좌, 학생, 과목 순서대로 입력\n\n");
	Input();
	Calc();
	Output();
}

void Input() { //char* 배열을 이용해 과목을 모두 출력하고, 동시에 점수를 입력받음.
	for (int i = 0; i < TRD; i++) {
		printf("강좌 %d 성적 입력 ->\n", i + 1);
		for (int o = 0; o < rRow; o++) {
			printf("학생 %d ", i + 1);//과목 출력
			for (int stu = 0; stu < COL; stu++)
				printf("%s ", student[stu]);
			printf("점수 입력 : ");
			for (int p = 0; p < COL; p++)
				scanf_s("%d", &score[i][o][p]);//점수 입력
		}
		printf("\n");
	}
	printf("성적 입력 끝!!\n\n");
}

void Calc() { //score[]에서 rRow의 인덱스는 과목의 합을 저장하는 역할. 때문에 rRow 인덱스를 제외하고 모두 불러와서 값을 누적시킴.
	for (int i = 0; i < TRD; i++) {
		for (int o = 0; o < rRow; o++) {
			for (int p = 0; p < COL; p++) {
				score[i][rRow][p] += score[i][o][p];
			}
		}
	}
}

void Output() { //*char 배열 출력으로 수정해야 함*
	for (int i = 0; i < TRD; i++) {
		printf("[강좌 %d]   영어  수학 국어\n", i + 1);
		for (int o = 0; o < rRow; o++) {
			printf("학생 %d   ", o + 1);
			for (int p = 0; p < COL; p++) { //각 과목의 점수 나열
				printf("%5d", score[i][o][p]);
			}
			printf("\n");
		}
		for (int o = 0; o < COL; o++) //for문을 사용해 표가 일정하게 출력되도록 함.
			printf("-----------");
		printf("\n평균    ");
		for (int o = 0; o < COL; o++)
			printf("%5.1lf ", (double)score[i][rRow][o] / rRow); //형변환과 평균값 계산을 printf에서 수행
		printf("\n\n");
	}
}

//2차원배열, 성적프로그램 *변형* 학생평균 추가.
//#define ROW 4
//
//int main(void) {
//	int score[ROW][3];
//	double eng = 0, math = 0, avg = 0;
//	double student[ROW];
//
//	printf("각 학생의 영어 점수와 수학 점수를 입력하세요\n");
//
//	for (int i = 0; i < ROW; i++) {
//		score[i][0] = i + 1;
//	}
//
//	for (int i = 0; i < ROW; i++) {
//		printf("%d번 학생의 영어 점수: ", i + 1);
//		scanf_s("%d", &score[i][1]);
//		eng += score[i][1];
//		printf("%d번 학생의 수학 점수: ", i + 1);
//		scanf_s("%d", &score[i][2]);
//		math += score[i][2];
//
//		student[i] = (score[i][1] + score[i][2]) / 2;
//	}
//	printf("\n");
//	printf("==============================================\n");
//	printf("번호   영어   수학  학생평균\n");
//	printf("==============================================\n");
//	for (int i = 0; i < ROW; i++)
//		printf("%3d %6d %6d %7.1lf\n", score[i][0], score[i][1], score[i][2], student[i]);
//	printf("==============================================\n");
//	printf("총점: %6.1lf %6.1lf\n", eng, math);
//	printf("평균: %6.1lf %6.1lf", eng / ROW, math / ROW);
//}