#include <stdio.h>

//���� 404~406������
//#include <stdlib.h>
//#include <time.h>
//
//#define MAX 100
//
//int main(void) {
//	long sec = (long)time(NULL);
//	srand(sec);
//
//	printf("1 ~ %5d ������ ���� 8��: \n", MAX);
//	for (int i = 0; i < 8; i++)
//		printf("%3d ", rand() % MAX + 1);
//	puts("");
//}

//�̿ϼ�
#define ROW 2
#define COL 3

int num[ROW][COL];
double sum[2] = { 0 };
void Input(), Calc(int);
//int Output(int);


int main(void) {

	Input();
	Calc(num);

	printf("��: %d, ���: %.2lf\n", (int)sum[0], sum[1]); //Calc(), sum[2]
	printf("�ݺ��� for�� ����Ͽ� ���\n");
	//Output(num);
	return 0;
}

void Input() {
	printf("6���� ������ �Է� : ");
	for (int i = 0; i < ROW; i++) {
		for (int o = 0; o < COL; o++)
			scanf_s("%d", &num[i][o]);
	}
}

//arr���� ó������ ���� ���� ���� �߻���
void Calc(int arr[][COL]) {
	printf("[Calc] ROW: %d, COL: %d", ROW, COL);
	for (int i = 0; i < ROW; i++) {
		for (int o = 0; o < COL; o++)
			sum[0] += arr[i][o];
	}
	sum[1] = sum[0] / (ROW * COL);
}



//����: �迭�̶� ��� �޾Ƽ� ����̶� ��� �� �ؾ���. 2������
//#define NUM 5
//void Input(), Sum();
//double data[NUM];
//double su[1] = {0};
//
//int main(void) {
//	printf("������ 5���� �Է�: ");
//	Input();
//	printf("\n\n");
//
//	for (int i = 0; i < NUM; i++)
//		printf("%2.1lf", (double)data[i]);
//	printf("\n");
//
//	Sum();
//	printf("��: %.1lf", su[0]);
//}
//
//void Input() {
//	for (int i = 0; i < NUM; i++)
//		scanf_s("%lf", data[i]);
//}
//
//void Sum() {
//	for (int i = 0; i < NUM; i++)
//		su[0] += data[i];
//	su[0] = su[0] / NUM;
//}

//1������.
//double Area(double), Cir(double);
//
//int main() {
//	double half;
//
//	printf("���� ������ �Է�: ");
//	scanf_s("%lf", &half);
//	printf("\n");
//
//	printf("������ %.2lf�� ���� ����: %.3lf\n", half, Area(half));
//	printf("������ %.2lf�� ���� �ѷ�: %.3lf\n", half, Cir(half));
//
//	return 0;
//}
//
//double Area(double half) {
//	double sum = 3.14 * half * half;
//	return sum;
//}
//
//double Cir(double half) {
//	double sum = 2 * 3.14 * half;
//	return sum;
//}

//void mes();
//
//int main() {
//	puts("main�Լ� ����");
//	mes();
//	return 0;
//}
//
//void mes() {
//	puts("\t�޽����Դϴ�");
//} //t�� �� �ϳ��� �ǹ���


//int main(void) {
//	char num = 0;
//	//���ڳ� ���ڿ��� ��Ÿ������ 3��° �Ű������� ������ ũ�� �ʿ�
//	scanf_s("%c", &num, 2);
//	printf("��� %c", num);
//}