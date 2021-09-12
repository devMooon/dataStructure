/*#include <stdio.h>
void sub(int x, int y, int z);
void sub2(int* x, int* y, int* z);

int main(void)
{
	int a, b, c;
	a = 2; b = 3; c = 4;
	sub(a, b, c);
	printf("%d %d %d\n", a, b, c);
	sub2(&a, &b, &c);
	printf("%d %d %d\n", a, b, c);

	return 0;
}
void sub(int x, int y, int z)
{
	y = y + 2; z = z + x;
}
void sub2(int* x, int* y, int* z)
{
	*y = *y + 2; *z = *z + *x;
}*/