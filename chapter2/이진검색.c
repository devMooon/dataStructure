#include <stdio.h>

int binsearch(int list[], int searchnum, int left, int right)
{
	int middle;
	while (left <= right) {
		middle = (left + right) / 2;
		if (list[middle] < searchnum) left = middle + 1;
		else if (list[middle] > searchnum) right = middle - 1;
		else if (list[middle] == searchnum) return middle; //else·Î ÇØµµ µÊ
	}
	return -1;
}
int main(void)
{
	int data[16] = { 12, 23, 25, 34, 45, 46, 57, 58, 69, 72, 75, 82, 86, 89, 97, 99 };
	int found; int key = 34;
	int n = 16;
	found = binsearch(data, key, 0, n - 1);
	printf("* It's at %d\n", found);

	return 0;
}