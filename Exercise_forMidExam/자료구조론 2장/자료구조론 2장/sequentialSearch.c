#include <stdio.h>
void findElement(int numbers[], int size, int find);

int main(void)
{
	int numbers[10] = { 1, 2, 3, 4, 5 };
	int size = 5;
	int find = 4;

	findElement(numbers, size, find);

	find = 10;
	findElement(numbers, size, find);

	return 0;
}
void findElement(int numbers[], int size, int find)
{
	for (int i = 0; i < size; i++) {
		if (find == numbers[i]) {
			printf("%d�� %d�� �����Դϴ�.\n", find, i);
			return;
		}
	}
	printf("%d�� �迭�ȿ� ���� ���Դϴ�.\n", find);
	return;
}