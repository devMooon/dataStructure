#include <stdio.h>
#define MAX 100

typedef struct {
	int key;
} element;
element queue[MAX];
void insertq(int* rear, element item)
{
	if (*rear >= MAX - 1) {
		printf("full");
	}
	else {
		queue[++ * rear] = item;
	}
}
element deleteq(int* front, int rear)
{
	element item;
	if (*front == rear) {
		printf("empty..");
		item.key = 0;
		return item;
	}
	else {
		return queue[++ * front];
	}
}

int main(void)
{
	int rear = -1;
	int front = -1;
	element e1;

	e1.key = 5; insertq(&rear, e1);
	printf("%d\n", deleteq(&front, rear));

	return 0;
}