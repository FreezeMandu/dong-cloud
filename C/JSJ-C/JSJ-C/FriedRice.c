#include <stdio.h>

//�迭��� �� ����, �Լ� ���̽�
//void Input(double num[], int n);
//double Calc(double num[], int n);
//
//int main(void) {
//	double num[5];
//
//	printf("�� 5�� �Է�: ");
//
//	Input(num, 5);
//	double max = Calc(num, 5);
//
//	printf("���� ū ��: %.1lf", max);
//}
//
//void Input(double num[], int n) {
//	for (int i = 0; i < n; i++) {
//		scanf_s("%lf", &num[i]);
//	}
//}
//
//double Calc(double num[], int n) {
//	int max = num[0];
//	for (int i = 0; i < n; i++) {
//		if (max < num[i]) max = num[i];
//	}
//	return max;
//}


//�迭��� �� ����
//int num[5];
//int max;
//
//int main(void) {
//	printf("�� 5�� �Է�: ");
//
//	for (int i = 0; i < 5; i++) {
//		scanf_s("%d", &num[i]);
//	}
//	max = num[0];
//
//	for (int i = 1; i < 5; i++) {
//		if (max < num[i]) max = num[i];
//	}
//
//	printf("���� ū ����: %d", max);
//}

//�Լ�+�迭(=������) ���� ����
//int Ba(int num[]);
//
//int main(void) {
//	int num[1];
//	num[0] = 5;
//
//	int re = Ba(num);
//	printf("���: %d", re);
//}
//
//int Ba(int num[]) {
//	printf("num ��: %d\n", num[0]);
//	int re = num[0] + 5;
//	return re;
//}

//�Լ�����2
//int Add(int, int);
//
//int main(void) {
//	printf("\n10 + 20 = %d", Add(10, 20));
//}
//
//int Add(int a, int b) {
//	int to = a + b;
//	return to;
//}

//�Լ�����
//int Add(int, int);
//int ab[2];
//
//int main(void) {
//	printf("���� 2�� �Է�: ");
//	scanf_s("%d %d", &ab[0], &ab[1]);
//	int to = Add(ab[0], ab[1]);
//	printf("\n���: %d", to);
//}
//
//int Add(int a, int b) {
//	int to = ab[0] + ab[1];
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