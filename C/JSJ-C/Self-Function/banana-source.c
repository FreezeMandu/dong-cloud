#include <stdio.h>

//input, output, avg �Լ� ����! main������ ���� ���
void Input2(int, int), Output(int, double);
int NumInput(int);
double Avg(int), avg = 0, to = 0;
int num[10], i, anum = 0;
int* p_num = 0;

int main(void) {

	anum = NumInput(anum);
	Input2(num[anum], anum);
	p_num = &num[10]; //void�� �Լ����� ���� ��ȯ�ޱ� ����.
	Avg(*p_num);
	Output(anum, avg);
}

int NumInput(int anum) { //num �迭 ũ�⸦ ����
	printf("�� ���� ���ڸ� �Է��Ͻðڽ��ϱ�? (�ִ� 10��) : ");
	scanf_s("%d", &anum);
	printf("\n[NumInput] %d �Է��߽��ϴ�.", anum); //log
	return anum;
}

void Input2(int num[10], int anum) {
	printf("\n[Input2] %d �Է¹޾ҽ��ϴ�.", anum); //log
	printf("\n\n���� %d�� �Է�: ", anum);
	if (anum <= 10) { //���İ�Ƽ �ڵ��� for ������ġ
		for (i = 0; i < anum; i++) {
			scanf_s("%d", &num[i]);
		}
	}
	else {
		printf("[Input2] �Լ� ����!"); //log
	}
	return num[10];
}


double Avg(int num[10]) {
	printf("\n[Avg] �Լ� �����"); //log
	if (anum <= 10) {
		for (i = 0; i < anum; i++) {
			to += num[i];
		}
	}
	avg = to / anum;
	return avg;
	printf("\n[Avg] �Լ� �����"); //log
}

void Output(int anum, double avg) {
	printf("\n���� %d���� ����� %.1lf�Դϴ�.", anum, avg);
}

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