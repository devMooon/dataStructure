#include <stdio.h>

struct node
{
	int data;
	struct node* link;
};

typedef struct node queue;
typedef struct node* queue_ptr;

queue_ptr front, rear;

void insert(queue_ptr* front, queue_ptr* rear, int x);
int delete(queue_ptr* front);

int main(void)
{
	insert(&front, &rear, 10);
	insert(&front, &rear, 20);
	insert(&front, &rear, 30);
	insert(&front, &rear, 40);
	insert(&front, &rear, 50);

	while (front) {
		printf("%d\n", delete(&front));
	}
	return 0;
}
void insert(queue_ptr* front, queue_ptr* rear, int x)
{
	//꽉찬 경우는 거의 없음
	queue_ptr temp = (queue_ptr)malloc(sizeof(queue));
	temp->data = x;
	temp->link = NULL;
	if (*front) (*rear)->link = temp;
	else *front = temp;

	*rear = temp;
}
int delete(queue_ptr* front)
{
	queue_ptr temp = *front;
	int data;
	if (!temp) {
		printf("The queue is empty\n");
		exit(1);
	}
	data = temp->data;
	*front = temp->link;
	free(temp);
	return data;
}