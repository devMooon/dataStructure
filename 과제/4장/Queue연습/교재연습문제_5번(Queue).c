//��ǻ�Ͱ������� 20200675 ������
#include <stdio.h>
#define MAX_QUEUE_SIZE 100
typedef struct {
	int key; //other fields
}element;
element queue[MAX_QUEUE_SIZE];

void queue_full(void)
{
	printf("ť�� full��");
}
void insertq(int* rear, element item) {
	if (*rear == MAX_QUEUE_SIZE - 1) {
		//3 ������ ������ 0��~100�� ������ ��
		// 
		queue_full();
		//4
		// ������ ������ 100���� �ƴ� ����ε� queue_full �Լ��� ȣ��� ��쿡��, ����ť�� ����� ť�� �� ������ ����ؼ� ����� �� �ְ� �Ѵ�.
		//ť ���Ҹ� ��� �������� �̵�?
	}
	queue[++*rear] = item;
}
element deleteq(int* front, int rear) {
	if (*front == rear) {
		printf(" => Queue Full\n");
	}
	return queue[++ * front];
}
int main(void)
//ť�� �׽�Ʈ �ϴ� ���α׷�
{
	int rear = -1;
	int front = -1;
	element e1;
	//1
	e1.key = 5;
	insertq(&rear, e1);
	//2
	e1 = deleteq(&front, rear);
	printf("delete = > %d", e1.key);
	return 0;
}