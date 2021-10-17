#include <stdio.h>
void ascending(int numbers[], int size); //오름차순 정렬
void descending(int numbers[], int size); //내림차순 정렬
void printArray(int numbers[], int size);

int main(void)
{
	int numbers[] = { 3, 5, 7, 2, 1, 4, 9, 0, 8, 6 };
	int size = 10;

	printf("정렬 전 : ");  printArray(numbers, size);
	ascending(numbers, size);
	printf("오름차순 정렬 후 : ");  printArray(numbers, size);
	descending(numbers, size);
	printf("내림차순 정렬 후 : ");  printArray(numbers, size);

	return 0;
}
void ascending(int numbers[], int size)
{
	int max, temp;

	for (int i = 0; i < size - 1; i++) {
		max = i;
		for (int j = i + 1; j < size; j++) {
			if (numbers[max] < numbers[j]) max = j;
		}
		temp = numbers[max];
		numbers[max] = numbers[i];
		numbers[i] = temp;
	}
}
void descending(int numbers[], int size)
{
	int min, temp;

	for (int i = 0; i < size - 1; i++) {
		min = i;
		for (int j = i + 1; j < size; j++) {
			if (numbers[min] > numbers[j]) min = j;
		}
		temp = numbers[min];
		numbers[min] = numbers[i];
		numbers[i] = temp;
	}
}
void printArray(int numbers[], int size)
{
	for (int i = 0; i < size; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
}