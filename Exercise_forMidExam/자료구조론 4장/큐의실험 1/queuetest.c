#include <stdio.h>
#define MAX_SIZE 3
void insert(int queue[], int front, int* rear, int item);
int delete(int queue[], int* frontP, int rear);
int isempty(int front, int rear);
int isfull(int rear);

int main(void)
{
	int queue[MAX_SIZE];
	int front = -1; //��
	int rear = -1; //��

	//���� �߱����� �� ��ȣ 3���� �����Ѵ�.
	printf("insert 5\n"); insert(queue, front, &rear, 5);
	printf("insert 4\n"); insert(queue, front, &rear, 4);
	printf("insert 3\n"); insert(queue, front, &rear, 3);
	
	//�߱������� ť���� �ϳ��� ������ ����Ѵ�.
	printf("delete %d\n", delete(queue, &front, rear));
	printf("delete %d\n", delete(queue, &front, rear));
	printf("delete %d\n", delete(queue, &front, rear));

	return 0;
}
void insert(int queue[], int front, int* rear, int item)
{
	if (isfull(*rear) == 1) printf("Queue is full!\n");
	else queue[++ * rear] = item;
}
int delete(int queue[], int* frontP, int rear)
{
	if (isempty(*frontP, rear) == 1) {
		printf("Queue is empty!\n");
		return -1;
	}
	else return queue[++ * frontP];
}
int isempty(int front, int rear)
{
	if (front == rear) return 1;
	else return 0;
}
int isfull(int rear)
{
	if (rear >= MAX_SIZE - 1) return 1;
	else return 0;
}
