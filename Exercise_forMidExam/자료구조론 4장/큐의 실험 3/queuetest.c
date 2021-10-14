#include <stdio.h>
#define MAX_SIZE 5

typedef struct {
	int num;
	char player;
} element;

element queue[MAX_SIZE];
int front = -1; //¾Õ
int rear = -1; //µÚ

element insert(element* e);
element delete(void);
int isempty(void);
int isfull(void);

int main(void)
{
	element e;

	e.num = 1; e.player = 'A'; e = insert(&e); printf("insert %d, %c\n", e.num, e.player);
	e.num = 2; e.player = 'B'; e = insert(&e); printf("insert %d, %c\n", e.num, e.player);
	e.num = 3; e.player = 'C'; e = insert(&e); printf("insert %d, %c\n", e.num, e.player);
	e = delete(); printf("delete %d, %c\n", e.num, e.player);
	e = delete(); printf("delete %d, %c\n", e.num, e.player);
	e = delete(); printf("delete %d, %c\n", e.num, e.player);

	return 0;
}
element insert(element* e) 
{
	if (isfull() == 1) {
		element N = { -1 };
		printf("Queue is full!\n");
		return N;
	}
	else {
		queue[++rear] = *e;
		return queue[rear];
	}
}
element delete(void)
{
	if (isempty() == 1) {
		element e = { -1, 'Z' };
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
