//��ǻ�Ͱ������� 20200675 ������
/*#include <stdio.h>
#define MAX_QUEUE_SIZE 5
typedef struct {
	int key;
	char alpa;
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
	printf("*** ����3 ***\n");
	int rear = -1; 	int front = -1;
	element e1, e2;
	e1.key = 100; e1.alpa = 'A';  insertq(&rear, front, e1);
	e1.key = 200; e1.alpa = 'B'; insertq(&rear, front, e1);
	e1.key = 300; e1.alpa = 'C'; insertq(&rear, front, e1);

	e2 = deleteq(&front, rear);
	printf(" => Return Value is %d, %c\n", e2.key, e2.alpa);
	e2 = deleteq(&front, rear);
	printf(" => Return Value is %d, %c\n", e2.key, e2.alpa);
	e2 = deleteq(&front, rear);
	printf(" => Return Value is %d, %c\n", e2.key, e2.alpa);
}*/