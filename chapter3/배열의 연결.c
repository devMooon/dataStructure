#include <stdio.h>
int array_concat(int A[], int n1, int B[], int n2, int C[])
{
	int num = n1 + n2;

	for (int i = 0; i < num; i++) {
		if (i < n1)
			C[i] = A[i];
		else
			C[i] = B[i-n1];
	}
	return num;
}
void print_arr(int arr[], int num)
{
	for (int i = 0; i < num; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main(void)
{
	int A[] = { 1, 2, 4,5,63,6,3,3 };
	int n1 = 8;
	int B[] = { 3, 4, 5 ,6 ,7,3, 4, 5 ,6 ,7 };
	int n2 = 10;
	int C[100];

	int n3 = array_concat(A, n1, B, n2, C); 

	printf("A[] : ");
	print_arr(A, n1);
	printf("B[] : ");
	print_arr(B, n2);
	printf("C[] : ");
	print_arr(C, n3);

	return 0;
}