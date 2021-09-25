//선택 정렬 : 가장 큰 수부터 차례로 선택하여 배열의 가장 끝 부분에 저장하는 과정을 반복적으로 수행
#include <stdio.h>
void selection_sort(int a[], int n);
void printList(int a[], int n);

int main(void)
{
	int list[10] = { 3, 6, 2, 9, 0, 1, 5, 7, 4, 8 };
	int size = 10;

	printf("정렬 전 : {"); printList(list, size);
	selection_sort(list, size);
	printf("정렬 후 : {"); printList(list, size);

	return 0;
}
// 선택 정렬 함수
void selection_sort(int a[], int n)
{
	int min, i, j;
	int tmp;
	for (int i = 0; i < n; i++)
	{
		min= i;
		for (int j = i+1; j < n; j++)
		{
			if(a[min] > a[j])
			{min = j;}
		}
		tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}
}

void printList(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++){
		printf("%d, ", a[i]);
	}
	printf("}\n");
}