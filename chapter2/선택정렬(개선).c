/*#include <stdio.h>

void selection_sort(int* A, int size)
{
	int i, j;
	int tmp;

	for (j = 0; j < size - 1; j++){ //size�� -1 �ϴ� ���� : ������ ���� ȥ�� �����ϱ� ���� �� �ʿ䰡 ����
		int small = j;
		for (i = j+1; i < size; i++) {
			if (A[small] > A[i]) small = i;
		}
		tmp = A[small];
		A[small] = A[j];
		A[j] = tmp;
	}
}

int main(void)
{
	int A[10] = { 10, 13, 25, 15, 4, 20, 5, 29, 14, 21 };
	int i;
	int n = 10;

	selection_sort(A, n);
	for (i = 0; i < n; i++) printf("%d ", A[i]);

	return 0;
}*/