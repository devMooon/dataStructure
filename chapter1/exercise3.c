/*#include<stdio.h>
int interative(int n); //�ݺ� �˰���
int recursive(int n); //��ȯ �˰���
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