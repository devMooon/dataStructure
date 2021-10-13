#include <stdio.h>
void sort(int x, int y, int z);

int main(void)
{
	int x = 1; int y = 5; int z = 10;

	sort(x, y, z);

	return 0;
}
void sort(int x, int y, int z)
{
	int max, mid, min;

	if (x >= y && x >= z) { //최대값 x
		max = x;
		if (y >= z) {
			mid = y;
			min = z;
		}
		else {
			mid = z;
			min = y;
		}
	}
	else if (y >= x && y >= z) { //최대값 y
		max = y;
		if (x >= z) {
			mid = x;
			min = z;
		}
		else {
			mid = z;
			min = x;
		}
	}
	else  { //최대값 z
		max = z;
		if (x >= y) {
			mid = x;
			min = y;
		}
		else {
			mid = y;
			min = x;
		}
	}
	printf("%d %d %d", max, mid, min);
}