#include <stdio.h>
#define MAX_SIZE 3 //큐에 들어갈 수 있는 원소의 개수는? = 2

int queue[MAX_SIZE];
int front = 0; int rear = 0;

void insert(int item);
int delete(void);
void print_queue(void);

int main(void)
{
	int item;

	printf("Delete %d\n", delete());
	item = 5; printf("Insert %d\n", item); insert(item);
	item = 6; printf("Insert %d\n", item); insert(item);
	item = 7; printf("Insert %d\n", item); insert(item);
	print_queue();

	printf("Delete %d\n", delete());
	printf("Delete %d\n", delete());
	printf("Delete %d\n", delete());
	print_queue();

	return 0;
}
void insert(int item)
{
	if (front == (rear + 1) % MAX_SIZE) printf("Queue is full\n");
	else {
		rear = (rear + 1) % MAX_SIZE;
		queue[rear] = item;
	}
}
int delete(void)
{
	if (front == rear) {
		printf("Queue is empty\n");
		return -1;
	}
	else {
		front = (front + 1) % MAX_SIZE;
		return queue[front];
	}
}
void print_queue(void)
{
	int i;
	printf("\nQueue element : ");
	for (i = (front + 1) % MAX_SIZE; i != (rear + 1) % MAX_SIZE; i = (++i) % MAX_SIZE) {
		printf("%d ", queue[i]);
	}
	printf("\n\n");
}