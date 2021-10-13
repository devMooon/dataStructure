/*#include <stdio.h>
#define MAX_SIZE 5

int circle[MAX_SIZE];
int front = 0;
int rear = 0;

int element_num()
{
	return (rear - front) % MAX_SIZE;
}
void insert(int item)
{
	rear = (rear + 1) % MAX_SIZE;
	if (rear == front) {
		printf("큐가 꽉 참\n");
		return;
	}
	circle[rear] = item;
}
int delete()
{
	if (rear == front) {
		printf("큐가 비었음\n");
		return;
	}
	front = (front + 1) % MAX_SIZE;
	return circle[front];
}
void print()
{
	int i;
	for (i = ((front+1)%MAX_SIZE); i != (rear+1); i = (++i)%MAX_SIZE) {
		printf("%d ", circle[i]);
	}
	printf("\n");
}
int main(void)
{
	insert(1);
	insert(2);
	insert(3);
	print();
	printf("버려진 값 : %d\n", delete());
	print();
	insert(4);
	print();
	insert(5);
	print();
	insert(6);
	print();
	return 0;
}*/