#include <stdio.h>
int find_max(int a[], int s);

int main(void)
{
	int numbers[] = { 1, 4, 2, 5, 4, 45, 8 };
	int size = 7;

	int big = find_max(numbers, size);

	printf("�ִ밪 : %d", big);

	return 0;	
}
int find_max(int a[], int s)
{
	int big = -1;
	for (int i = 0; i < s; i++) {
		if (big < a[i]) big = a[i];
	}
	return big;
}