#include <stdio.h>
#define MAX_Q_SIZE 5

int front = -1;
int real = -1;

int queue[MAX_Q_SIZE];

int queueFull()
{
	if (real == MAX_Q_SIZE - 1) {
		printf("Queue is full!\n");
		return 1;
	}
	else {
		return 0;
	}
}
int queueEmpty()
{
	if (front == real) {
		printf("Queue is empty!\n");
		return 1;
	}
	else {
		return 0;
	}
}
void queueInsert(int num)
{
	if(queueFull() == 1) return;
	queue[++real] = num;
}
void queueDelete()
{
	if (queueEmpty() == 1) return;
	front++;
}
void quequPrint()
{
	printf("front: %d, real: %d\n", front, real);
	for(int i = front + 1; i <= real; i++) {
		printf("%d ", queue[i]);
	}
	printf("\n\n");
}

int main(void)
{
	queueDelete();
	queueInsert(1); quequPrint();
	queueInsert(3); quequPrint();
	queueInsert(4); quequPrint();
	queueDelete(); quequPrint();
	queueDelete(); quequPrint();
	queueInsert(5); quequPrint();
	queueInsert(7); quequPrint();
	queueInsert(2); quequPrint();
	return 0;
}