#include <stdio.h>

//2�����迭, �������α׷� *����* �л���� �߰�.
#define ROW 4

int main(void) {
	int score[ROW][3];
	double eng = 0, math = 0, avg = 0;
	double student[ROW];

	printf("�� �л��� ���� ������ ���� ������ �Է��ϼ���\n");

	for (int i = 0; i < ROW; i++) {
		score[i][0] = i + 1;
	}

	for (int i = 0; i < ROW; i++) {
		printf("%d�� �л��� ���� ����: ", i + 1);
		scanf_s("%d", &score[i][1]);
		eng += score[i][1];
		printf("%d�� �л��� ���� ����: ", i + 1);
		scanf_s("%d", &score[i][2]);
		math += score[i][2];

		student[i] = (score[i][1] + score[i][2]) / 2;
	}
	printf("\n");
	printf("==============================================\n");
	printf("��ȣ   ����   ����  �л����\n");
	printf("==============================================\n");
	for (int i = 0; i < ROW; i++)
		printf("%3d %6d %6d %7.1lf\n", score[i][0], score[i][1], score[i][2], student[i]);
	printf("==============================================\n");
	printf("����: %6.1lf %6.1lf\n", eng, math);
	printf("���: %6.1lf %6.1lf", eng / ROW, math / ROW);
}

//����׷������� 2-1
//int main(void) {
//	int nums[5] = { 30,20,10,40,50 };
//
//	for (int i = 0; i < 5; i++) {
//		int relay = nums[i];
//		printf("��ȣ[%d]�� �� %d: ", i, relay);
//		for (int j = 1; j < relay; j++) {
//			printf("*");
//		}
//		puts("");
//	}
//}

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