#include <stdio.h>
//2차원 배열. 학생, 과목.
//Input() 함수: 학생 n번의 과목 점수 순서대로 입력받기.
//Calc() 함수: 강좌별 중간, 기말의 평균 계산하기.
//Output() 함수: 평균값을 계산하여 바로 출력하기.

//1. 입력, 2. 계산, 3. 출력, q.종료 기능 만들기.
//입력: 점수 입력 사이클 수행하기. -> 입력 함수
//계산: 점수의 합, 평균 계산 사이클 수행하기. -> 계산 함수
//출력: 항상 쓰던 그 양식으로 출력하기 -> 출력 양식에 두 함수 사용
//또한 잘못된 값을 입력할 경우 메시지 출력. ->main에서 if문 사용

//배열과 상수를 사용해 리턴값을 없애보자.
#define ROW 3 //학생+1
#define COL 2 //과목

int rRow = ROW - 1; //학생(ROW)의 마지막 주소.
void Input(), Calc(), Output();
int total[ROW][COL] = {0};

int main() {
	int mei;
	char mec;

	printf("1. 입력  2. 계산  3. 출력  q.종료\n");

	while (1) {
		printf("메뉴 입력: ");
		if (scanf_s("%d", &mei)) { //미리 입력받지 않고도 작동하는 이유가 뭐임??
			printf("\n");
			if (mei == 1) Input();
			else if (mei == 2) Calc();
			else if (mei == 3) Output();
			else {
				printf("잘못된 입력!\n");
			}
		}
		else if (scanf_s("%c", &mec, 1)) {
			printf("\n");
			if (mec == 'q') {
				printf("\n프로그램 종료!");
				return 0;
			}
			else {
				printf("잘못된 입력!\n");
			}
		}
	}
}

void Input() {
	printf("각 학생의 영어 점수와 수학 점수 입력\n");
	for (int i = 0; i < rRow; i++) {
		printf("%d번 학생의 영어 점수 입력: ", i+1);
		scanf_s("%d", &total[i][0]);
		printf("%d번 학생의 수학 점수 입력: ", i+1);
		scanf_s("%d", &total[i][1]);
	
	}
	printf("\n");
}

void Calc() { //과목'별' 합을 구하므로 과목(COL) 인덱스를 고정하고 학생(ROW) 인덱스를 돌림.
	for (int o = 0; o < COL; o++) {
		for (int i = 0; i < rRow; i++) total[rRow][o] += total[i][o];
	}
	printf("계산되었습니다.\n");
	printf("==========================\n");
	printf("과목 총점  ");
	printf("영어: %1d  수학: %1d\n", total[rRow][0], total[rRow][1]);
	printf("==========================\n");
}

void Output() {
	printf("[Output] 함수 실행!\n");
}