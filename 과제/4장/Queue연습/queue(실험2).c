//��ǻ�Ͱ������� 20200675 ������
#include <stdio.h>
#define MAX_QUEUE_SIZE 5
typedef struct {
	int key;
	//other fields
} element;

element queue[MAX_QUEUE_SIZE];

void insertq(int* rear, int front, element item) {
	if (*rear == MAX_QUEUE_SIZE - 1) {
		printf(" => Queue Full\n");
		return;
		//exit();
		//�ٸ� ó����� ? ť�� ���Ҹ� ��� �������� �̵� ?
	}
	queue[++ * rear] = item;
}

element deleteq(int* front, int rear) {
	//element e;
	if (*front == rear)
	{
		printf(" => Queue Full\n");
		return;
		//exit(); //return an error key
	}
	return queue[++ * front];
}

element first()
{
	element e = { 0 };
	// ... �ڵ� �ۼ� �ʿ�.
	return e;
}
int isempty(int front, int rear)
{
	if (front == rear) return(1); else return(0);
}

int isfull(int front, int rear)
{
	if (rear == (MAX_QUEUE_SIZE - 1)) return(1);
	else return(0);
}


void main(void) // ť�� �׽�Ʈ�ϴ� ���α׷�
{
	printf("*** ����2 ***\n");
	int rear = -1; 	int front = -1;
	element e1, e2;
	//ũ�Ⱑ 5�� ť�� 6���� ���� ����
	e1.key = 100; insertq(&rear, front, e1);
	e1.key = 200; insertq(&rear, front, e1);
	e1.key = 300; insertq(&rear, front, e1);
	e1.key = 400; insertq(&rear, front, e1);
	e1.key = 500; insertq(&rear, front, e1);
	e1.key = 600; insertq(&rear, front, e1);

	//�� ť�� �ϳ� ����
	int rear2 = -1; int front2 = -1;
	e2 = deleteq(&front2, rear2);
}