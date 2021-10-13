#include <stdio.h>
int sigma(int numbers[], int size);

int main(void)
{
	int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int sum = sigma(numbers, size);

	printf("모든 수의 합 : %d", sum);

	return 0;
}
int sigma(int numbers[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += numbers[i];
	}
	return sum;
}