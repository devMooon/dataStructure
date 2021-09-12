/*#include<stdio.h>
int interative(int n); //반복 알고리즘
int recursive(int n); //순환 알고리즘
int main(void)
{
	int n = 7;
	printf("interative -> %d! = %d\n", n, interative(n));
	printf("recursive -> %d! = %d", n, recursive(n));
}
int interative(int n)
{
	int pactorial = 1;

	while (1) {
		if (n < 1)
			return pactorial;
		else {
			pactorial *= n;
			n--;
		}
	}
}
int recursive(int n)
{
	if (n < 1) return 1;
	else return n * recursive(n - 1);
}*/