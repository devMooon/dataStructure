#include <stdio.h>
void binarySearch(int numbers[], int size, int item);

int main(void)
{
	int numbers[] = { 1, 2, 3, 5, 7, 9, 10 };
	int size = sizeof(numbers)/ sizeof(int);
	int item;

	item = 10; binarySearch(numbers, size, item);
	item = 7; binarySearch(numbers, size, item);
	item = 6; binarySearch(numbers, size, item);

	return 0;
}
void binarySearch(int numbers[], int size, int item)
{
	int middle;
	int left = 0;
	int right = size - 1;

	while (left <= right) {
		middle = (left + right) / 2;
		if (numbers[middle] > item) right = middle - 1;
		else if (numbers[middle] < item) left = middle + 1;
		else {
			printf("%d는 %d번째 요소 입니다\n", item, middle);
			return;
		}
	}
	printf("%d는 배열의 요소가 아닙니다!\n", item);
	return;
}