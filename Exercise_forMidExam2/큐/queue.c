#include <stdio.h>
#define MAX 5

int queue[MAX];

void insert(int* rear, int item);
int delete(int* front, int rear);
int isfull(int rear);
int isempty(int front, int rear);

int main(void)
{
	int front = -1;
	int rear = -1;

	delete(&front, rear);
	insert(&rear, 10);
	insert(&rear, 20);
	insert(&rear, 30);
	insert(&rear, 40);
	insert(&rear, 50);
	insert(&rear, 60);

	while (!isempty(front, rear)) {
		printf("%d\n", delete(&front, rear));
	}

	return 0;
}
void insert(int* rear, int item)
{
	if (isfull(*rear)) {
		printf("The queue is full\n");
	}
	else {
		queue[++ * rear] = item;
	}
}
int delete(int *front, int rear)
{
	if (isempty(*front, rear)) {
		printf("The queue is empty\n");
		return -1;
	}
	else {
		return queue[++ * front];
	}
}
int isfull(int rear)
{
	if (rear >= MAX - 1) return 1;
	else return 0;
}
int isempty(int front, int rear)
{
	if (front == rear) return 1;
	else return 0;
}
