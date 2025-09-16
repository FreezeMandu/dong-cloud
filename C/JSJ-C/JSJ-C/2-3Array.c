#include <stdio.h>

//3���� �迭. ����, �л�, ����.
//Input() �Լ�: �л� n���� ���� ���� ������� �Է¹ޱ�.
//Calc() �Լ�: ���º� �߰�, �⸻�� ��� ����ϱ�.
//Output() �Լ�: ��հ��� ����Ͽ� �ٷ� ����ϱ�.

#define TRD 2
#define ROW 3 //����(TRD)�� �л�(ROW) ���� �Է� ���� ���� �ڵ����� ������.
#define COL 3 //����(COL) ���� ������ ��� �ٷ� �� student �迭�� ���� ��������� ��.

char* student[COL] = { "����", "����", "����" }; //����'��'�� �����Ϸ��� *�� ������ ������ ����� �Ѵٰ� �ϴ���~
int static rRow = ROW - 1; //���ǹ��� �����. ���ÿ� ���� ������ ���� ���� �ε���.

int score[TRD][ROW][COL];
void Input(), Calc(), Output(); //�������� �迭�� ����� ����ϹǷ� ��ȯ���� ���� void ���.


int main(void) {
	printf("���� �Է� ���α׷�. ����, �л�, ���� ������� �Է�\n\n");
	Input();
	Calc();
	Output();
}

void Input() { //char* �迭�� �̿��� ������ ��� ����ϰ�, ���ÿ� ������ �Է¹���.
	for (int i = 0; i < TRD; i++) {
		printf("���� %d ���� �Է� ->\n", i + 1);
		for (int o = 0; o < rRow; o++) {
			printf("�л� %d ", i + 1);//���� ���
			for (int stu = 0; stu < COL; stu++)
				printf("%s ", student[stu]);
			printf("���� �Է� : ");
			for (int p = 0; p < COL; p++)
				scanf_s("%d", &score[i][o][p]);//���� �Է�
		}
		printf("\n");
	}
	printf("���� �Է� ��!!\n\n");
}

void Calc() { //score[]���� rRow�� �ε����� ������ ���� �����ϴ� ����. ������ rRow �ε����� �����ϰ� ��� �ҷ��ͼ� ���� ������Ŵ.
	for (int i = 0; i < TRD; i++) {
		for (int o = 0; o < rRow; o++) {
			for (int p = 0; p < COL; p++) {
				score[i][rRow][p] += score[i][o][p];
			}
		}
	}
}

void Output() { //*char �迭 ������� �����ؾ� ��*
	for (int i = 0; i < TRD; i++) {
		printf("[���� %d]   ����  ���� ����\n", i + 1);
		for (int o = 0; o < rRow; o++) {
			printf("�л� %d   ", o + 1);
			for (int p = 0; p < COL; p++) { //�� ������ ���� ����
				printf("%5d", score[i][o][p]);
			}
			printf("\n");
		}
		for (int o = 0; o < COL; o++) //for���� ����� ǥ�� �����ϰ� ��µǵ��� ��.
			printf("-----------");
		printf("\n���    ");
		for (int o = 0; o < COL; o++)
			printf("%5.1lf ", (double)score[i][rRow][o] / rRow); //����ȯ�� ��հ� ����� printf���� ����
		printf("\n\n");
	}
}

//2�����迭, �������α׷� *����* �л���� �߰�.
//#define ROW 4
//
//int main(void) {
//	int score[ROW][3];
//	double eng = 0, math = 0, avg = 0;
//	double student[ROW];
//
//	printf("�� �л��� ���� ������ ���� ������ �Է��ϼ���\n");
//
//	for (int i = 0; i < ROW; i++) {
//		score[i][0] = i + 1;
//	}
//
//	for (int i = 0; i < ROW; i++) {
//		printf("%d�� �л��� ���� ����: ", i + 1);
//		scanf_s("%d", &score[i][1]);
//		eng += score[i][1];
//		printf("%d�� �л��� ���� ����: ", i + 1);
//		scanf_s("%d", &score[i][2]);
//		math += score[i][2];
//
//		student[i] = (score[i][1] + score[i][2]) / 2;
//	}
//	printf("\n");
//	printf("==============================================\n");
//	printf("��ȣ   ����   ����  �л����\n");
//	printf("==============================================\n");
//	for (int i = 0; i < ROW; i++)
//		printf("%3d %6d %6d %7.1lf\n", score[i][0], score[i][1], score[i][2], student[i]);
//	printf("==============================================\n");
//	printf("����: %6.1lf %6.1lf\n", eng, math);
//	printf("���: %6.1lf %6.1lf", eng / ROW, math / ROW);
//}