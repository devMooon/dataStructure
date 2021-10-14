/*#include <stdio.h>
#define MAX_SIZE 8 //최대 원소의 개수 7
typedef struct {
	int key;
} element;
element queue[MAX_SIZE];
int front = 0;//전역변수 앞
int rear = 0; //전역변수 뒤

void clear_queue(void);
void insert(int front, int* rear, element item);
element delete(int* front, int rear);
void printQ(void);

int main(void)
{
	element e;
	e.key = 5; printf("insert %d\n", e.key); insert(front, &rear, e);
	e.key = 4; printf("insert %d\n", e.key); insert(front, &rear, e);
	e.key = 3; printf("insert %d\n", e.key); insert(front, &rear, e);
	printQ();
	e.key = 5; printf("insert %d\n", e.key); insert(front, &rear, e);
	e.key = 4; printf("insert %d\n", e.key); insert(front, &rear, e);
	e.key = 3; printf("insert %d\n", e.key); insert(front, &rear, e);
	printQ();

	e.key = 4; printf("insert %d\n", e.key); insert(front, &rear, e);
	printQ();
	e.key = 3; printf("insert %d\n", e.key); insert(front, &rear, e);
	printQ();

	printf("delete %d\n", delete(&front, rear).key);
	printf("delete %d\n", delete(&front, rear).key);
	printf("delete %d\n", delete(&front, rear).key);
	printQ();

	return 0;
}
void clear_queue(void)
{
	front = rear = 0;
}
void insert(int front, int* rear, element item)
{
	if (front == (*rear + 1) % MAX_SIZE)
	{
		printf("\n*Queue overflow.\n");
		return -1;
	}
	*rear = (*rear + 1) % MAX_SIZE;
	queue[*rear] = item;
	return item;


	if (front == (*rear + 1) % MAX_SIZE) {
		printf("Queue is full!\n");
		return -1;
	}
	*rear = (*rear + 1) % MAX_SIZE;
	queue[*rear] = item;
}
element delete(int*front, int rear)
{
	if (*front == rear) {
		printf("Queue is empty!\n");
		element e;
		e.key = -1;
		return e;
	}
	*front = (*front + 1) % MAX_SIZE;
	return queue[*front];
}
void printQ(void)
{
	int i;
	printf("큐의 원소 : ");
	for (i = ((front + 1) % MAX_SIZE); i != (rear + 1); i = (++i) % MAX_SIZE)
		printf("%-3d", queue[i].key); printf("\n");
}*/