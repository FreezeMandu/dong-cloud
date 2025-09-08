#include <stdio.h>

int Ba(int num[]);

int main(void) {
	int num[1];
	num[0] = 5;

	int re = Ba(num);
	printf("°á°ú: %d", re);
}

int Ba(int num[]) {
	printf("num °ª: %d\n", num[0]);
	int re = num[0] + 5;
	return re;
}