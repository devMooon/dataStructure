#include <stdio.h>
/*#include <stdlib.h>
#include <time.h>*/

void print_data(int a[], int n);
double average(int a[], int n);
double variance(int a[], double b[], int n, double aver);
void deviation(int a[], double b[], int n, double aver);
int garbage(int a[], int n, int min, int max);
int upAverage(int a[], int n, double aver);

int main(void)
{
	// time_t t;
	int data[10] = { 3, 0, 5, 7, 3, 5, 10, 9, 2, 7 }; // 100;

	double data2[10]; // 100
	int size = 10; // 100

	//데이터 입력 받기
	/*time(&t); srand(t); //난수 발생 초기화
	for (i = 0; i < 100; i++)
	{
		data[i] = (rand() % 500);
	}*/

	//데이터 처리 결과 출력
	printf("변경 전 데이터 : ");
	print_data(data, size);
	printf("버려진 값의 갯수 : %d\n", garbage(data, size, 1, 9));

	printf("변경 후 데이터 : ");
	print_data(data, size);

	double aver = average(data, size);
	printf("평균 : %g\n", aver);
	printf("분산 : %g\n", variance(data, data2, size, aver)); // 분산 = 모두 더해(편차*편차)/100 , 편차 제곱의 평균
	
	printf("평균보다 큰 값의 갯수 : %d\n", upAverage(data, size, aver));
	return 0;
}
void print_data(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}
double average(int a[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return (sum / n);
}
double variance(int a[], double b[], int n, double aver)
{
	double sum = 0;

	deviation(a, b, n, aver); //편차 = 값 - 평균
	for (int i = 0; i < n; i++)
	{
		sum += (b[i] * b[i]);
	}
	return (sum / n);
}
void deviation(int a[], double b[], int n, double aver)
{
	for (int i = 0; i < n; i++)
	{
		b[i] = (a[i] - aver);
	}
}
int garbage(int a[], int n, int min, int max) //6)을 위해 min, max 값 추가
{
	int garb = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min || a[i] > max) { // 100, 400
			garb++;
			a[i] = 2; // 200
		}
	}
	return garb;
}
int upAverage(int a[], int n, double aver)
{
	int upAver = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > aver) {
			upAver++;
		}	
	}
	return upAver;
}