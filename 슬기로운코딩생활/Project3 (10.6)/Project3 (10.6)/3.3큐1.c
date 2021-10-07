/*#include <stdio.h>
#define MAX_Q_SIZE 5

typedef struct {
	int key;
	//queue의 필드에 다른 원소가 들어갈 수 있다.
}element;

element queue[MAX_Q_SIZE];

int queueFull(int real)
{
	if (real == MAX_Q_SIZE - 1) {
		printf("Queue is full!\n");
		return 1;
	}
	else {
		return 0;
	}
}
int queueEmpty(int front, int real)
{
	if (front == real) {
		printf("Queue is empty!\n");
		return 1;
	}
	else {
		return 0;
	}
}
void queueInsert(int* real, int num)
{
	if(queueFull(*real) == 1) return;
	queue[++*real].key = num;
}
element queueDelete(int* front, int real)
{
	if (queueEmpty(*front, real) == 1) return;
	return queue[++*front];
}
void quequPrint(int front, int real)
{
	printf("front: %d, real: %d\n", front, real);
	for(int i = front + 1; i <= real; i++) {
		printf("%d ", queue[i].key);
	}
	printf("\n\n");
}

int main(void)
{
	int front = -1;
	int real = -1;

	queueDelete(&front, real);
	queueInsert(&real, 1); quequPrint(front, real);
	queueInsert(&real, 3); quequPrint(front, real);
	queueInsert(&real, 4); quequPrint(front, real);
	element e = queueDelete(&front, real); quequPrint(front, real);
	printf("\ndelete된 값 : %d\n", e.key);
	queueDelete(&front, real); quequPrint(front, real);
	queueInsert(&real, 5); quequPrint(front, real);
	queueInsert(&real, 7); quequPrint(front, real);
	queueInsert(&real, 2); quequPrint(front, real);
	return 0;
}*/