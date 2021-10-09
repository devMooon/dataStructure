#include <stdio.h>
#define MAX_QUEUE_SIZE 5
typedef struct {
	int key;
}element;
element queue[MAX_QUEUE_SIZE];

void queue_full(int* rear, int* front)
{
	int new_rear = *rear - *front - 1;
	if (*front != 0) {
		int num = 0;
		for (int i = *front + 1; i <= *rear; i++) {
			queue[num].key = queue[i].key;
			num++;
		}
	}
	*rear = new_rear;
	*front = -1;
}
element queue_empty(void)
{
	element e;
	e.key = -1;
	return e;

}
void insert(int* rear, int*front, element item) {
	if (*rear >= MAX_QUEUE_SIZE - 1) {
		printf("큐 변형중 ...");
		queue_full(rear, front);
	}
	queue[++*rear].key = item.key;
}
element delete(int* front, int rear) {
	if(*front == rear)
		return queue_empty();
	return queue[++ * front];
}
int isempth(int front, int rear)
{
	if (front == rear) return(1); return(0);
}
int isfull(int rear)
{
	if (rear == MAX_QUEUE_SIZE - 1) return(1); else return(0);
}
void print_queue(int front, int rear)
{

	for (int i = front + 1; i <= rear; i++) {
		printf("%d ", queue[i].key);
	}
	printf("\n");
}

int main(void)
{
	int front = -1;
	int rear = -1;

	element item, item1, item2, item3, item4, item5, item6;
	item.key = 1;
	item1.key = 2;
	item2.key = 3;
	item3.key = 4;
	item4.key = 5;
	item5.key = 6;
	item6.key = 7;

	insert(&rear, &front, item); print_queue(front, rear);
	insert(&rear, &front, item1); print_queue(front, rear);
	insert(&rear, &front, item2); print_queue(front, rear);
	printf("버려진 값 : %d\n", delete(&front, rear).key);  print_queue(front, rear);
	insert(&rear, &front, item3);  print_queue(front, rear);
	insert(&rear, &front, item4);  print_queue(front, rear);
	printf("버려진 값 : %d\n", delete(&front, rear).key);  print_queue(front, rear);
	insert(&rear, &front, item5);  print_queue(front, rear);
	insert(&rear, &front, item6);  print_queue(front, rear);
	return 0;
}