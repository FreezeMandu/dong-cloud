#include <stdio.h>

//input, output, avg �Լ� ����! main������ ���� ���
void Input(int num[5]);
int Calc(int num[5]);
double Avg(double);
int* p_to;


int main(void) {
	int num[5] = {0};
	int to;
	p_to = &to;
	double avg;

	printf("���� 5���� �Է��Ͻÿ�: ");

	Input(num); //�Է� Ȱ��ȭ �� ���� 1���� ��������� ���� �����!

	for (int i = 0; i < 5; i++) {
		printf("\n[main] �迭 �� %d", num[i]); //num[5] log
	}

	to = Calc(num);
	avg = Avg(to);

	printf("\n\n���� 5���� ���: %.2lf", avg);
}

void Input(int num[5]) {
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &num[i]);
	}
}

int Calc(int num[5]) {
	int to = 0;
	for (int i = 0; i < 5; i++) {
		to += num[i]; //void �ȿ� �ִ°� ��� �������� ����Ͻÿ�
	}
	return to;
}

double Avg(double avg) {
	avg = *p_to / 5;
	return avg;
}