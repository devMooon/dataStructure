#include <stdio.h>
#define MAX_QUEUE_SIZE 100
typedef struct {
	int key;
} element;
element queue[MAX_QUEUE_SIZE];

void insertq(int* rear, element item);
element deleteq(int* front, int rear);
void queue_full(void);

int main(void)
{
	int rear = -1; int front = -1;
	element e1;
	e1.key = 5;  insertq(&rear, e1);
	printf("delete %d\n", deleteq(&front, rear).key);
}
void insertq(int* rear, element item)
{
	if (*rear >= MAX_QUEUE_SIZE - 1) //true면 원소의 개수 0~100개
		queue_full(); //큐의 원소를 모두 왼쪽으로 이동
	queue[++ * rear] = item;
}
element deleteq(int* front, int rear)
{
	if (*front == rear) {
		element p; p.key = -1;
		//queue_empty();
		return p;
	}
	else return queue[++ * front];
}
void queue_full(void)
{
	//원소가 100개가 아닌 경우엔 원형 큐 사용, 원소를 지울 때마다 모든 원소를 왼쪽으로 이동
	printf("Queue is full"); exit();
}