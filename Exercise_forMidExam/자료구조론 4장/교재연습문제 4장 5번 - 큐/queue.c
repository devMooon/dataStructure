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
	if (*rear >= MAX_QUEUE_SIZE - 1) //true�� ������ ���� 0~100��
		queue_full(); //ť�� ���Ҹ� ��� �������� �̵�
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
	//���Ұ� 100���� �ƴ� ��쿣 ���� ť ���, ���Ҹ� ���� ������ ��� ���Ҹ� �������� �̵�
	printf("Queue is full"); exit();
}