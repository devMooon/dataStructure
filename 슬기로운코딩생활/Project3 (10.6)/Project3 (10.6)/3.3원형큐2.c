/*#include <stdio.h>
#define MAX_Q_SIZE 5

typedef struct {
	int key;
	//�ٸ� ������ ���Ұ� ���� �� ����
} element;
int front = 0;
int rear = 0;
element queue[MAX_Q_SIZE];

void queueInsert(int front, int* rear, int item)
{
	*rear = (*rear + 1) % MAX_Q_SIZE;
	if (front == *rear) return;
	queue[*rear].key = item;
}
element queueDelete(int* front, int rear)
{
	if (*front == rear) return;
	*front = (*front + 1) % MAX_Q_SIZE;
	return queue[*front];
}
void queuePrint(int front, int rear)
{
	printf("front �� : %d, rear �� : %d\n", front, rear);
	for (int i = (front + 1) % MAX_Q_SIZE; i != (rear + 1); (i++) % MAX_Q_SIZE){
		printf("%d ", queue[i].key);
	}
	printf("\n");
}

int main(void)
{
	queueDelete(&front, rear);
	queueInsert(front, &rear, 10); queuePrint(front, rear);
	queueInsert(front, &rear, 12); queuePrint(front, rear);
	queueInsert(front, &rear, 14); queuePrint(front, rear);
	element e = queueDelete(&front, rear); queuePrint(front, rear);
	printf("������ �� : %d", e.key);
	return 0;
}*/