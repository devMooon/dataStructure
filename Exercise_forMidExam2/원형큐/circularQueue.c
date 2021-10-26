#include <stdio.h>
#define MAX 10 //원소의 가능한 최대 개수 9

int queue[MAX];

void insert(int* rear, int front, int item);
int delete(int rear, int* front);
int isfull(int rear, int front);
int isempty(int rear, int front);

int main(void)
{
	int front = 0;
	int rear = 0;

	delete(rear, &front);
	insert(&rear, front, 10); 
	insert(&rear, front, 20);
	insert(&rear, front, 30);
	insert(&rear, front, 40);
	insert(&rear, front, 50);

	while (!isempty(rear, front)) {
		printf("%d\n", delete(rear, &front));
	}
	return 0;
}

void insert(int* rear, int front, int item)
{
	if (isfull((*rear + 1) % MAX, front)) printf("The queue is full\n");
	else {
		*rear = (*rear + 1) % MAX;
		queue[*rear] = item;
	}
}
int delete(int rear, int* front)
{
	if (isfull(rear, *front)) {
		printf("The queue is empty\n");
		return -1;
	}
	else {
		*front = (*front + 1) % MAX;
		return queue[*front];
	}
}
int isfull(int rear, int front)
{
	if (front == rear) return 1;
	else return 0;
}
int isempty(int rear, int front)
{
	if (front == rear) return 1;
	else return 0;
}