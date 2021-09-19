#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void scanarr(int list[], int size);
void printarr(int list[], int size);
void add(int a[], int b[], int c[], int size);

int main(void)
{
	int A[20];
	int B[20];
	int C[30] = { 0 };
	int length = 20;

	printf("첫번째 숫자 입력 : ");
	scanarr(A, length);
	printf("두번째 숫자 입력 : ");
	scanarr(B, length);

	printf("첫번째 숫자 : ");
	printarr(A, length);

	printf("두번째 숫자 : ");
	printarr(B, length);

	add(A, B, C, length);
	printf("두수의 합계 : ");
	printarr(C, length);

	return 0;
}
void scanarr(int list[], int size)
{
	for (int i = 0; i < size; i++) {
		scanf("%1d", &list[i]);
	}
}
void printarr(int list[], int size)
{
	for (int i = 0; i < size; i++) {
		printf("%d", list[i]);
	}
	printf("\n");
}
void add(int a[], int b[], int c[], int size)
{
	int sum = 0;

	for (int i = size; i >= 0; i--) {
		sum = a[i] + b[i] + c[i];
		if ((sum / 10) > 0) {
			c[i - 1] += 1;
			sum %= 10;
		}
		c[i] += sum - c[i];
	}
}