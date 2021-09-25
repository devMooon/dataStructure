/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void random(int d[], int s);
void selection_sort(int d[], int s);
int binary_search(int d[], int s, int sd);
void print_data(int d[], int s, int sd);

int main(void)
{
	int data[10];
	int size = 10;
	int searchData;

	random(data, size);
	selection_sort(data, size);
	
	printf("ã�� ���� �Է��ϼ���. : ");
	scanf("%d", &searchData);
	
	print_data(data, size, searchData);
	int index = binary_search(data, size, searchData);
	
	return 0;
}
void random(int d[], int s)
{
	for (int i = 0; i < s; i++) {
		d[i] = (rand() % 100) + 1;
	}
}
void selection_sort(int d[], int s)
{
	int minIndex;
	int tmp;

	for (int i = 0; i < s - 1; i++) {
		minIndex = i;
		for (int k = i+1; k < s; k++) {
			if (d[minIndex] > d[k]) {
				minIndex = k;
			}
		}
		tmp = d[i];
		d[i] = d[minIndex];
		d[minIndex] = tmp;
	}
}
int binary_search(int d[], int s, int sd)
{
	int left = 0;
	int right = s - 1;
	int middle;
	int num = 0;

	while (left <= right) {
		num++;
		middle = (left + right) / 2;
		
		printf("�ݺ� %d : left �� = %d, right �� = %d, middle �� = %d\n", num, left, right, middle); //�񱳵����� ���� ����?
		if (sd == d[middle]) {
			printf("�� �ݺ� Ƚ�� : %d��\n", num);
			return middle;
		}
		else if (sd < d[middle]) right = middle - 1;
		else if (sd > d[middle]) left = middle + 1;
	}
	
	printf("\n���� ã�� ���߽��ϴ�...\n");
	printf("�� �ݺ� Ƚ�� : %d��\n", num);
	return -1;
}
void print_data(int d[], int s, int sd)
{
	printf("\n�ʱ� ������ : ");
	for (int i = 0; i < s; i++) {
		printf("%d ", d[i]);
	}
	printf("\n");

	printf("������ ���� : %d��, �˻� ������ : %d\n\n", s, sd);
}*/