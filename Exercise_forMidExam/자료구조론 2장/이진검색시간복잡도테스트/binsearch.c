#include <stdio.h>

int list[] = { 9, 15, 16, 19, 21, 39, 51, 55, 76, 85, 99 };
void binsearch(int list[], int searchnum, int left, int right) {
	int middle;
	int num = 1;

	while (left <= right) {
		middle = (left + right) / 2;
		printf("½ÇÇà! %d\n", num);
		num++;
		if (searchnum > list[middle]) left = middle + 1;
		else if (searchnum < list[middle]) right = middle - 1;
		else return middle;
	}
	return -1;
}
int main(void)
{
	binsearch(list, 15, 0, 10);
}