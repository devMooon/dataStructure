#include <stdio.h>
#define MAX_SIZE 5
void insert(int queue[], int front, int* rear, int item);
int delete(int queue[], int* frontP, int rear);
int isempty(int front, int rear);
int isfull(int rear);

int main(void)
{
	int queue[MAX_SIZE];
	int front = -1; //앞
	int rear = -1; //뒤

	//비어있는 큐에서 하나 삭제 => queue empty
	printf("delete %d\n", delete(queue, &front, rear));

	//연속 6개 삽입 => queue full
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
	if (isfull(*rear) == 1) printf("Queue is full!\n");
	else queue[++*rear] = item;
}
int delete(int queue[], int* frontP, int rear)
{
	if (isempty(*frontP, rear) == 1) {
		printf("Queue is empty!\n");
		return -1;
	}
	else return queue[++*frontP];
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
