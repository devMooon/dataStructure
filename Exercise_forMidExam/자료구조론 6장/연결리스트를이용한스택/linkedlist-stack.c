
/* 프로그램 6-3, 6-4 연결리스트를 이용한 스택 : linkedlist-stack.c */
#include <stdio.h>
#include <malloc.h>
#define MAX_STACK_SIZE 100

struct node {
	int item;
	struct node* link;
};
typedef struct node stack;
typedef stack* stack_ptr;

stack_ptr top = NULL;

void push(int data) {
	stack_ptr temp =
		(stack_ptr)malloc(sizeof(stack));
	if (!temp) {
		fprintf(stderr, "The memory is full\n");
		exit(1);
	}
	temp->item = data;
	temp->link = top;
	top = temp;
}

int pop() {
	stack_ptr temp = top;
	int item;
	if (!temp) {
		fprintf(stderr, "The stack is empty\n");
		exit(1);
	}
	item = temp->item;
	top = temp->link;
	free(temp);
	return item;
}

int isempty()
{
	if (top == NULL) return(1); else return(0);
}

int topelement(stack_ptr top)
{
	stack_ptr temp = top;
	int item;
	if (!temp) return -1;
	return top->item;
}
int main()
{
	int e;
	push(20);
	push(40);
	push(60);

	printf("가장 위에 있는 원소 : %d\n", topelement(top));
	printf(" Begin Stack Test ...\n");

	while (!isempty())
	{
		e = pop();
		printf("value = %d\n", e);
	}

	
}