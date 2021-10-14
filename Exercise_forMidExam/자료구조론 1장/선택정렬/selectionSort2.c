#include <stdio.h>
void sort(int numbers[], int size);
void print_numbers(int numbers[], int size);

int main(void)
{
	int numbers[] = { 94, 19, 50, 12, 10, 24, 5, 55, 0 };
	int size = sizeof(numbers) / sizeof(int);

	printf("size : %d\n", size);

	printf("정렬 전 : ");  print_numbers(numbers, size);
	sort(numbers, size);
	printf("정렬 후 : ");  print_numbers(numbers, size);

	return 0;
}
void sort(int numbers[], int size)
{
	int i, k, min, temp;

	for (i = 0; i < size - 1; i++) {
		min = i;
		for (k = i + 1; k < size; k++) {
			if (numbers[min] > numbers[k]) min = k;
		}
		temp = numbers[min];
		numbers[min] = numbers[i];
		numbers[i] = temp;
	}
}
void print_numbers(int numbers[], int size)
{
	for (int i = 0; i < size; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
}