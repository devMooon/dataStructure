#include <stdio.h>

int f(int n);

int main(void)
{
	printf("%d", f(8));
	return 0;
}
int f(int n)
{
	if (n <= 1) return 1;
	else return (f(n - 1) + f(n - 2));
}