#include <stdio.h>

//�迭����
//int main(void) {
//	int i;
//	double age[3], to = 0, avg;
//
//	printf("3���� ���� �Է�: ");
//	for (i = 0; i < 3; i++) {
//		scanf_s("%lf", &age[i]);
//		to += age[i];
//	}
//
//	avg = to / 3.0;
//	printf("�հ�: %.1lf\n", to);
//	printf("3�� ���� ���: %.1lf", avg);
//}

//input, output, avg �Լ� ����! main������ ���� ���
void Input2(int, int), Output(int, double);
int NumInput(int);
double Avg(double), avg = 0, to = 0;
int num[] = {0}, i, anum = 0;

int main(void) {

	NumInput(anum);
	Input2(num[anum], anum);
	Avg(num[anum]);
	Output(anum, avg);
}

int NumInput(int anum) {
	printf("�� ���� ���ڸ� �Է��Ͻðڽ��ϱ�? (�ִ� 10��) : ");
	scanf_s("%d", &anum);
	printf("\n%d �Է��߽��ϴ�.", anum); //log
	return anum;
}

void Input2(int num[], int anum) {

	printf("\n\n���� %d�� �Է�: ", anum);
	if (anum <= 10) { //���İ�Ƽ �ڵ��� for ������ġ
		for (i = 0; i < anum; i++) {
			scanf_s("%d", &num[i]);
		}
	}
	else {
		printf("Input2 �Լ� ����!");
	}
}


double Avg(double avg) {
	for (i = 0; i < anum; i++) {
		to += num[i];
	}
	avg = to / anum;
	return avg;
	printf("\nAvg �Լ� �����"); //log
}

void Output(int anum, double avg) {
	printf("\n���� %d���� ����� %.1lf�Դϴ�.", anum, avg);
}