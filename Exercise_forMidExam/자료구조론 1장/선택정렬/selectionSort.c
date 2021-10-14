/*#include <stdio.h>
void ascending(int numbers[], int size);
void descending(int numbers[], int size);
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
	int big, temp;
	for (int i = 0; i < size - 1; i++) {
		big = i;
		for (int k = i + 1; k < size; k++) {
			if (numbers[big] <= numbers[k]) big = k;
		}
		temp = numbers[big];
		numbers[big] = numbers[i];
		numbers[i] = temp;
	}
}
void descending(int numbers[], int size)
{
	int small, temp;
	for (int i = 0; i < size - 1; i++) {
		small = i;
		for (int k = i + 1; k < size; k++) {
			if (numbers[small] >= numbers[k]) small = k;
		}
		temp = numbers[small];
		numbers[small] = numbers[i];
		numbers[i] = temp;
	}
}
void printArray(int numbers[], int size)
{
	for (int i = 0; i < size; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
}*/