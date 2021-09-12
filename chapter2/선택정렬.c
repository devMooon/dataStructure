/*#include <stdio.h>

void selection_sort(int* A, int* B)
{
	int i, j;
	int small = 0;

	for (j = 0; j < 10; j++) {
		for (i = 0; i < 10; i++) {
			if (A[small] > A[i]) small = i;
		}
		B[j] = A[small];
		A[small] = 99;
	}
}

int main(void)
{
	int A[10] = { 10, 13, 25, 15, 4, 20, 5, 29, 14, 21 };
	int B[10] = { 0 };
	int i;
	int n = 10;

	selection_sort(A, B);
	for (i = 0; i < 10; i++) printf("%d ", B[i]);

	return 0;
}*/