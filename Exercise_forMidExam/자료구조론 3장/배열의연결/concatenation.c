#include <stdio.h>
void array_concat(int A[], int n1, int B[], int n2, int C[], int* n3);
void printArray(int array[], int* n);

int main(void)
{
	int A[] = { 1, 2, 3, 4, 5 };
	int B[] = { 6, 7, 8, 9, 10 };
	int C[20];
	int size1 = 5;                      
	int size2 = 5;
	int size3;

	printf("배열 A : ");  printArray(A, size1);
	printf("배열 B : ");  printArray(B, size2);

	array_concat(A, size1, B, size2, C, &size3);
	printf("배열 C : ");  printArray(C, size3);

	return 0;
}
void array_concat(int A[], int n1, int B[], int n2, int C[], int* n3)
{
	int i;
	*n3 = n1 + n2;
	for (i = 0; i < n1; i++) {
		C[i] = A[i];
	}
	for (i = 0; i < n2; i++) {
		C[n1 + i] = B[i];
	}
}
void printArray(int array[], int* n)
{
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}