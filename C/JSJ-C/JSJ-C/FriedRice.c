#include <stdio.h>

//�Լ�����
//int Calc(int, int);
//int a, b, to = 0;
//
//int main(void) {
//
//	printf("���� 2�� �Է�: ");
//	scanf_s("%d %d", &a, &b);
//
//	Calc(a, b);
//	printf("\n��: %d", to);
//}
//
//int Calc() {
//	to = a + b;
//	return to;
//}

//�����Ϳ���
//
//int main(void) {
//  double* p_num = 0;
//  double avg = 0, to = 0;
//	double a, b;
//	p_num = &to;
//
//	printf("���� 2�� �Է� ");
//	scanf_s("%lf %lf", &a, &b);
//
//	printf("\n[main] %.1lf, %.1lf �Էµ�", a, b);
//
//	to = a + b;
//	printf("\n[main] �� %.1lf", to);
//
//	avg = *p_num / 2.4;
//	printf("\n[main] ���� %.2lf", avg);
//
//}

//�迭����
//int main(void) {
//	int i;
//	double age[3], to=0, avg;
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