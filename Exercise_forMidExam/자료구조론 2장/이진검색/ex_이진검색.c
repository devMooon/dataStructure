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
	//�˰��� �ۼ�
}
void print(int find, int index)
{
	if (index == -1) printf("%d�� �迭�ȿ� ���� ���Դϴ�.\n", find);
	else printf("%d�� %d�� ����Դϴ�.\n", find, index);
}