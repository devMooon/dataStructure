/*#include <stdio.h>
#include<time.h>
#define MAX_SIZE 1601
#define ITERATIONS 26
#define SWAP(x, y, t)((t)=(x),(x)=(y),(y)=(t))
void sort(int list[], int n);

void main(void)
{
	int i, j, position;
	int list[MAX_SIZE];
	int sizelist[] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000,1100,1200,1300,1400,1500,1600 };

	clock_t start, stop;
	double duraction;

	printf(" n time\n");
	for (i = 0; i < ITERATIONS; i++) {
		for (j = 0; j < sizelist[i]; j++) {
			list[j] = sizelist[i] - j;
		}
		start = clock();
		sort(list, sizelist[i]);
		stop = clock();

		//CLK_TCK = 초당 똑닥거리는 수
		duraction = ((double)(stop - start)) / CLK_TCK;
		printf(" n = %6d, time = %8.2f\n", sizelist[i], duraction);
	}
}
void sort(int list[], int n)
{
	int i, j, min, temp;
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++)
			if (list[j] < list[min])
				min = j;
		SWAP(list[i], list[min], temp);
	}
}*/