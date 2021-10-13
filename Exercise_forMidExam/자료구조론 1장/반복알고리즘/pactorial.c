#include <stdio.h>
int pactorial(int n);

int main(void)
{
	int pac = 7;
	int result = pactorial(pac);

	printf("%d! = %d", pac, result);
}
int pactorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}