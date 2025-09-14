#include <stdio.h>
//3���� �迭. ����, �л�, ����.
//Input() �Լ�: �л� n���� ���� ���� ������� �Է¹ޱ�.
//Calc() �Լ�: ���º� �߰�, �⸻�� ��� ����ϱ�.

#define TRD 2
#define ROW 3
#define COL 3

char* student[COL] = { "����", "����", "����"};
int static rRow = ROW - 1; //���ǹ��� �����. ���ÿ� ���� ������ ���� ���� �ε���.

int score[TRD][ROW][COL];
void Input(), Calc(), Output(); //���������� �迭, ����� ����ϹǷ� ��ȯ���� ���� void ���.


int main(void) {
	printf("���� �Է� ���α׷�. ����, �л�, ���� ������� �Է�\n\n");
	Input();
	Calc();
	Output();
}

void Input() { //���ڿ� �迭�� �̿��� ������ ��� ����ϰ�, ���ÿ� ������ �Է¹���.
	for (int i = 0; i < TRD; i++) {
		printf("���� %d ���� �Է� ->\n", i+1);
		for (int o = 0; o < rRow; o++) {
			printf("�л� %d ", i+1);
			for (int stu = 0; stu < COL; stu++)
				printf("%s ", student[stu]);
			printf("���� �Է� : ");
			for (int p = 0; p < COL; p++)
				scanf_s("%d", &score[i][o][p]);
		}
		printf("\n");
	}
	printf("���� �Է� ��!!\n\n");
}

void Calc() { //���ǹ��� < rRow�̹Ƿ� �����Ѵٴ� �ǹ�. �ε����� 0���� �����ϹǷ� rRow�� �״�� ���.
	for (int i = 0; i < TRD; i++) {
		for (int o = 0; o < rRow; o++) {
			for (int p = 0; p < COL; p++) {
				score[i][rRow][p] += score[i][o][p];
			}
		}
	}
}

void Output() { //�迭 ������� �ٲ�� ��.
	for (int i = 0; i < TRD; i++) {
		printf("[���� %d]   ����  ���� ����\n", i + 1);
		for (int o = 0; o < rRow; o++) {
			printf("�л� %d   ", o + 1);
			for (int p = 0; p < COL; p++) { //�� ������ ���� ����
				printf("%5d", score[i][o][p]);
			}
			printf("\n");
		}
		for (int o = 0; o<COL; o++) //for���� ����� ǥ�� �����ϰ� ��µǵ��� ��.
			printf("-----------");
		printf("\n���    ");
		for (int o = 0; o < COL; o++)
			printf("%5.1lf ", (double)score[i][rRow][o] / rRow); //����ȯ�� ��հ��� printf���� ����
		printf("\n\n");
	}
}