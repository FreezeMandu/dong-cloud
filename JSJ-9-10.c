#include <stdio.h>

double Calc(double, double);

int main(void) {
	double n1, n2, sum;

	printf("�Ǽ� 2�� �Է�: ");
	scanf_s("%lf %lf", &n1, &n2);
	sum = Calc(n1, n2);

	printf("���: %.2lf", sum);
}

double Calc(double n1, double n2) {
	return n1 + n2;
}

//�Լ� ���ܿ���
//double tot(double, double, double);
//
//int main(void) {
//	double n1 = 10.2, n2 = 20.2, n3 = 30.2;
//	double sum = 0;
//	sum = tot(n1, n2, n3);
//	printf("���� %.2lf �Դϴ�.", sum);
//}
//
//double tot(double n1, double n2, double n3) {
//	double sum = n1 + n2 + n3;
//	return sum; 
//	// �Լ��� ����Ÿ�԰� �����Ϸ��� ������ ���� ��ġ
//}

//2�����迭
//#define ROW 4
//#define COL 2
//
//int main(void) {
//	int sum = 0, midSum = 0, finSum = 0;
//	int nums[ROW][COL];
//
//	printf("ah: ");
//	for (int i = 0; i < ROW; i++) {
//		for (int j = 0; j < COL; j++) {
//			scanf_s("%d", &nums[i][j]);
//		}
//	}
//
//	puts("");
//
//	printf("      �߰�     �⸻\n");
//	printf("--------------------\n");
//	for (int i = 0; i < ROW; i++) {
//		for (int j = 0; j < COL; j++) {
//			printf("%9d", nums[i][j]);
//			sum += nums[i][j];
//			if (j == 0) midSum += nums[i][j];
//			else finSum += nums[i][j];
//		}
//		printf("\n");
//	}
//	printf("--------------------\n");
//	printf("���: %.2lf   %.2lf\n", (double)midSum / COL, (double)finSum / COL);
//	printf("������ ���� %.2lf�̰� ����� %.2lf�Դϴ�.", (double)sum, (double)sum / (ROW * COL));
//}

//���� 8-3
//#define ROW 2
//#define COL 3
//
//int main(void) {
//	int nums[ROW][COL];
//
//	printf("���� 6�� �Է�: ");
//	for (int i = 0; i < ROW; i++) {
//		for (int j = 0; j < COL; j++)
//			scanf_s("%d", &nums[i][j]);
//	}
//
//	printf("\nfor�� �̿��Ͽ� ���\n");
//	for (int i = 0; i < ROW; i++) {
//		for (int j = 0; j < COL; j++)
//			printf("nums[%d][%d] = %d ", i, j, nums[i][j]);
//		printf("\n");
//	}
//}

//���� 8-2
//#define SIZE 6
//int main(void) {
//	int num[SIZE] = {0};
//	int sum = 0;
//
//	printf("���� 6�� �Է�: ");
//	for (int i = 0; i < SIZE; i++) {
//		scanf_s("%d", &num[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < SIZE; i++) {
//		sum += num[i];
//		printf("num[%d] = %d\n", i, num[i]);
//	}
//	printf("\n������ ���� %d�̰� ����� %d�̴�\n", sum, sum / SIZE);
//}
