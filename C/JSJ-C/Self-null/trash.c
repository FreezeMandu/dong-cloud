#include <stdio.h>
//2���� �迭. �л�, ����.
//Input() �Լ�: �л� n���� ���� ���� ������� �Է¹ޱ�.
//Calc() �Լ�: ���º� �߰�, �⸻�� ��� ����ϱ�.
//Output() �Լ�: ��հ��� ����Ͽ� �ٷ� ����ϱ�.

//1. �Է�, 2. ���, 3. ���, q.���� ��� �����.
//�Է�: ���� �Է� ����Ŭ �����ϱ�. -> �Է� �Լ�
//���: ������ ��, ��� ��� ����Ŭ �����ϱ�. -> ��� �Լ�
//���: �׻� ���� �� ������� ����ϱ� -> ��� ��Ŀ� �� �Լ� ���
//���� �߸��� ���� �Է��� ��� �޽��� ���. ->main���� if�� ���

//�迭�� ����� ����� ���ϰ��� ���ֺ���.
#define ROW 3 //�л�+1
#define COL 2 //����

int rRow = ROW - 1; //�л�(ROW)�� ������ �ּ�.
void Input(), Calc(), Output();
int total[ROW][COL] = {0};

int main() {
	int mei;
	char mec;

	printf("1. �Է�  2. ���  3. ���  q.����\n");

	while (1) {
		printf("�޴� �Է�: ");
		if (scanf_s("%d", &mei)) { //�̸� �Է¹��� �ʰ� �۵��ϴ� ������ ����??
			printf("\n");
			if (mei == 1) Input();
			else if (mei == 2) Calc();
			else if (mei == 3) Output();
			else {
				printf("�߸��� �Է�!\n");
			}
		}
		else if (scanf_s("%c", &mec, 1)) {
			printf("\n");
			if (mec == 'q') {
				printf("\n���α׷� ����!");
				return 0;
			}
			else {
				printf("�߸��� �Է�!\n");
			}
		}
	}
}

void Input() {
	printf("�� �л��� ���� ������ ���� ���� �Է�\n");
	for (int i = 0; i < rRow; i++) {
		printf("%d�� �л��� ���� ���� �Է�: ", i+1);
		scanf_s("%d", &total[i][0]);
		printf("%d�� �л��� ���� ���� �Է�: ", i+1);
		scanf_s("%d", &total[i][1]);
	
	}
	printf("\n");
}

void Calc() { //����'��' ���� ���ϹǷ� ����(COL) �ε����� �����ϰ� �л�(ROW) �ε����� ����.
	for (int o = 0; o < COL; o++) {
		for (int i = 0; i < rRow; i++) total[rRow][o] += total[i][o];
	}
	printf("���Ǿ����ϴ�.\n");
	printf("==========================\n");
	printf("���� ����  ");
	printf("����: %1d  ����: %1d\n", total[rRow][0], total[rRow][1]);
	printf("==========================\n");
}

void Output() {
	printf("[Output] �Լ� ����!\n");
}