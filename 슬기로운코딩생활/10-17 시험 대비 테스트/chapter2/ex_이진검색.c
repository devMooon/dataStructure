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
	int reft, middle, right;
	reft = 0;
	right = size;

	while (reft <= right) {
		middle = (reft + right) / 2;
		if (numbers[middle] == find) return middle;
		else if(numbers[middle] > find) right = middle - 1;
		else reft = middle + 1;
	}
	return -1;
}
void print(int find, int index)
{
	if (index == -1) printf("%d�� �迭�ȿ� ���� ���Դϴ�.\n", find);
	else printf("%d�� %d�� ����Դϴ�.\n", find, index);
}