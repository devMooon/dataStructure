#include <stdio.h>
#define MAX 10

typedef struct
{
	int data;
} element;

element queue[MAX];
int front = -1;
int rear = -1;

void insert(int* rear, int data);
int delete(int* front, int rear);

int main(void)
{
	insert(&rear, 10);
	insert(&rear, 20);
	insert(&rear, 30);
	insert(&rear, 40);
	insert(&rear, 50);

	while (front < rear) {
		printf("%d\n", delete(&front, rear));
	}

	return 0;
}
void insert(int* rear, int data)
{
	if (*rear >= MAX - 1) {
		printf("The queue is full\n");
		exit(1);
	}

	queue[++ * rear].data = data;
}
int delete(int* front, int rear)
{
	if (*front == rear) {
		printf("The queue is empty\n");
		exit(1);
	}
	return queue[++ * front].data;
}