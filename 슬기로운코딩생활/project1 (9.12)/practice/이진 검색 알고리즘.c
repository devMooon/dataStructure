#include <stdio.h>
void print_data(int d[], int n);
int binsearch(int list[], int searchnum, int left, int right);
int main(void)
{
	int list[] = { 9, 15, 16, 19, 21, 39, 51, 55, 76, 85, 99 };

	printf("Data : ");
	print_data(list, 11);
	//데이터가 11개인데 왜 right가 10?
	int index = binsearch(list, 15, 0, 10);

	printf("찾는 값 : %d, 위치 : %d", 15, index);

	return 0;
}
void print_data(int d[], int n)
{
	for (int i = 0; i < n; i++) {
		printf("%d ", d[i]);
	} printf("\n");
}
int binsearch(int list[], int searchnum, int left, int right)
{
	int middle;
	int num = 0;

	while (left <= right) {
		num++;
		middle = (left + right) / 2;

		if (list[middle] == searchnum) {
			printf("3번째 문장 실행 횟수 : %d\n", num);
			return middle;
		}
		else if (list[middle] < searchnum) left = middle + 1;
		else if (list[middle] > searchnum) right = middle - 1;
	}

	printf("값을 찾지 못했습니다...\n");
	return -1;
}