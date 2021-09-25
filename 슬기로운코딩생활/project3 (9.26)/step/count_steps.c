#include <stdio.h>
#define MAX_SIZE 3

void mult(int a[][MAX_SIZE], int b[][MAX_SIZE], int c[][MAX_SIZE])
{
	int i, j, k;
	for (i = 0; i < MAX_SIZE; i++)
		for (j = 0; j < MAX_SIZE; j++) {
			c[i][j] = 0;
			for (k = 0; k < MAX_SIZE; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
}

void printMatrix(int matrix[][MAX_SIZE], int rows, int cols)
{
	int i, j;
	int count = 0;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			printf("%2d ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			count++;
			printf("%2d ", count);
		}
		printf("\n");
	}
	printf("\n");
}
int main(void)
{
	int A[][MAX_SIZE] = { 1, 1, 1, 2, 2, 2, 3, 3, 3};
	int B[][MAX_SIZE] = { 1, 1, 1, 2, 2, 2, 3, 3, 3 };
	int C[3][MAX_SIZE];

	printMatrix(A, 3, 3);
	mult(A, B, C);
	printMatrix(C, 3, 3);

	return 0;
}