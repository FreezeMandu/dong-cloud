#include <stdio.h>

//�迭����
int main(void) {
	int i;
	double age[3], to=0, avg;

	printf("3���� ���� �Է�: ");
	for (i = 0; i < 3; i++) {
		scanf_s("%lf", &age[i]);
		to += age[i];
	}

	avg = to / 3.0;
	printf("�հ�: %.1lf\n", to);
	printf("3�� ���� ���: %.1lf", avg);
}

//���̿���
//int main(void) {
//	int a, b, c, to;
//	double avg;
//
//	printf("3�� ���� �Է�: ");
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	to = a + b + c;
//	avg = to / 3;
//
//	printf("3�� ���� ���: %.1lf", avg);
//}