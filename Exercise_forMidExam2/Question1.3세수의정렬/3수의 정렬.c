#include <stdio.h>

int main(void)
{
	int x = 9; int y = 8; int z = 7;
	int max, mid, min;

	if (x >= y && x >= z) {
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
	else if (y >= x && y >= z) {
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
	else {
		max = z;
		if (y >= x) {
			mid = y;
			min = x;
		}
		else {
			mid = x;
			min = y;
		}
	}
	printf("%d %d %d", max, mid, min);

	return 0;
}