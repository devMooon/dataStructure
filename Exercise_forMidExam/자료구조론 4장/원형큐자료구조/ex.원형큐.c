#include <stdio.h>
#define MAX_SIZE 3 //ť�� �� �� �ִ� ������ ������? = 

int queue[MAX_SIZE];
int front = //; 
int rear = //;

void insert(int item);
int delete(void);
void print_queue(void);

int main(void)
{
	int item;

	printf("Delete %d\n", delete());
	item = 5; printf("Insert %d\n", item); insert(item);
	item = 6; printf("Insert %d\n", item); insert(item);
	item = 7; printf("Insert %d\n", item); insert(item);
	print_queue();

	printf("Delete %d\n", delete());
	printf("Delete %d\n", delete());
	printf("Delete %d\n", delete());
	print_queue();

	return 0;
}
void insert(int item)
{
	//�˰��� �ۼ�
}
int delete(void)
{
	//�˰��� �ۼ�
}
void print_queue(void)
{
	//�˰��� �ۼ�
}