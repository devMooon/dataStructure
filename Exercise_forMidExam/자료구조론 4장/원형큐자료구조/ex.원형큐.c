#include <stdio.h>
#define MAX_SIZE 3 //큐에 들어갈 수 있는 원소의 개수는? = 

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
	//알고리즘 작성
}
int delete(void)
{
	//알고리즘 작성
}
void print_queue(void)
{
	//알고리즘 작성
}