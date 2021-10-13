#include <stdio.h>
int search(int numbers[], int size, int find);
void print(int find, int index);

int main(void)
{
	int numbers[] = { 1, 2, 3, 4, 5 };
	int size = 5;

	int find = 4;
	int index = search(numbers, size, find);
	print(find, index);

	find = 10;
	index = search(numbers, size, find);
	print(find, index);

	return 0;
}
int search(int numbers[], int size, int find)
{
	int front, middle, rear;
	front = 0; rear = size - 1;

	while (front <= rear) {
		middle = (front + rear) / 2;

		if (find > numbers[middle]) front = middle + 1;
		else if (find < numbers[middle]) rear = middle - 1;
		else return middle;
	}
	return -1;
}
void print(int find, int index)
{
	if (index == -1) printf("%d는 배열안에 없는 값입니다.\n", find);
	else printf("%d는 %d번 요소입니다.\n", find, index);
}