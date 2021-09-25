//���� ���� : ���� ū ������ ���ʷ� �����Ͽ� �迭�� ���� �� �κп� �����ϴ� ������ �ݺ������� ����
#include <stdio.h>
void selection_sort(int a[], int n);
void printList(int a[], int n);

int main(void)
{
	int list[10] = { 3, 6, 2, 9, 0, 1, 5, 7, 4, 8 };
	int size = 10;

	printf("���� �� : {"); printList(list, size);
	selection_sort(list, size);
	printf("���� �� : {"); printList(list, size);

	return 0;
}
// ���� ���� �Լ�
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