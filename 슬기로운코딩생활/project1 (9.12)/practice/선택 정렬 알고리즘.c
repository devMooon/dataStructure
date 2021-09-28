/*#include <stdio.h>
void print_data(int d[], int n);
void sort_data(int d[], int n);

int main(void)
{
	int data[10] = { 20, 1, 50, 55, 34, 21, 4, 66, 71, 8 };
	int size = 10;

	printf("정렬 전 데이터 : ");
	print_data(data, size);

	sort_data(data, size);
	printf("정렬 후 데이터 : ");
	print_data(data, size);
	
	return 0;
}
void print_data(int d[], int n)
{
	for (int i = 0; i < n; i++) {
		printf("%d ", d[i]);
	} printf("\n");
}
void sort_data(int d[], int n)
{
	int sevenLine = 0;
	int eightLine = 0;
	int min;
	int tmp;

	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int k = i+1; k < n; k++) {
			sevenLine++;
			if (d[min] > d[k]) {
				min = k; //7번
			}
		}
		tmp = d[i];
		d[i] = d[min];
		d[min] = tmp; //8번
		eightLine++;
	}
	printf("7번 문장 수행 횟수 : %d\n\n", sevenLine);
	printf("8번 문장 수행 횟수 : %d\n\n", eightLine);
}*/