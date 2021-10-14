#include <stdio.h>
#define MAX_SIZE 5

typedef struct {
	int key;
} element;

element queue[MAX_SIZE];
int front = -1; //앞
int rear = -1; //뒤

element insert(int item);
element delete(void);
int isempty(void);
int isfull(void);

int main(void)
{
	//비어있는 큐에서 하나 삭제 => queue empty
	printf("delete %d\n", delete().key);

	//연속 6개 삽입 => queue full
	printf("insert %d\n", insert(5).key);
	printf("insert %d\n", insert(4).key);
	printf("insert %d\n", insert(3).key);
	printf("insert %d\n", insert(2).key);
	printf("insert %d\n", insert(1).key);
	printf("insert %d\n", insert(0).key);

	return 0;
}
element insert(int item)
{
	if (isfull() == 1) {
		element e = { -1 };
		printf("Queue is full!\n");
		return e;
	}
	else {
		queue[++rear].key = item;
		return queue[rear];
	}
}
element delete(void)
{
	if (isempty() == 1) {
		element e = { -1 };
		printf("Queue is empty!\n");
		return e;
	}
	else {
		return queue[++front];
	}
}
int isempty(void)
{
	if (front == rear) return 1;
	else return 0;
}
int isfull(void)
{
	if (rear >= MAX_SIZE - 1) return 1;
	else return 0;
}