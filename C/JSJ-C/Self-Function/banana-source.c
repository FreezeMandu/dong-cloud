#include <stdio.h>

int in[4];
void Input();
int Calc(int in[4]);
double Avg(int);

int main(void) {
	double avg;
	int total;

	printf("�� 4���� �Է��Ͻÿ�: ");

	Input(in);
	total = Calc(in);
	avg = Avg(total);

	printf("\n��հ��� %.1lf�Դϴ�", avg);
}

void Input(int in[]) {
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &in[i]);
	}
}

int Calc(int in[]) {
	int to = 0;
	for (int i = 0; i < 4; i++) {
		to += in[i];
	}
	printf("\n[Calc] %d ����", to);
	return to;
}

double Avg(int total) {
	double avg = 0;
	avg = total / 4.0;
	printf("\n[Avg] %.1lf ����", avg);
	return avg;
}