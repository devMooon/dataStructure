#include <stdio.h>
#define MAX_SIZE 5
void insert(int queue[], int front, int* rear, int item);
int delete(int queue[], int* frontP, int rear);
int isempty(int front, int rear);
int isfull(int rear);

int main(void)
{
	int queue[MAX_SIZE];
	int front = -1;
	int rear = -1;

	//����ִ� ť���� �ϳ� ���� => queue empty
	printf("delete %d\n", delete(queue, &front, rear));

	//���� 6�� ���� => queue full
	printf("insert 5\n"); insert(queue, front, &rear, 5);
	printf("insert 4\n"); insert(queue, front, &rear, 4);
	printf("insert 3\n"); insert(queue, front, &rear, 3);
	printf("insert 2\n"); insert(queue, front, &rear, 2);
	printf("insert 1\n"); insert(queue, front, &rear, 1);
	printf("insert 0\n"); insert(queue, front, &rear, 0);

	return 0;
}
void insert(int queue[], int front, int* rear, int item)
{
	//�˰��� �ۼ�
}
int delete(int queue[], int* frontP, int rear)
{
	//�˰��� �ۼ�
}
int isempty(int front, int rear)
{
	//�˰��� �ۼ�
}
int isfull(int rear)
{
	//�˰��� �ۼ�
}
