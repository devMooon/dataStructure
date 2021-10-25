#include <stdio.h>

struct node
{
	int data;
	struct node* link;
};

typedef struct node stack;
typedef struct node* stack_ptr;

stack_ptr top;

void push(stack_ptr* top, int data);
void print(stack_ptr top);
int pop(stack_ptr* top);

int main(void)
{
	push(&top, 10);
	push(&top, 20);
	push(&top, 30);
	push(&top, 40);
	push(&top, 50);

	while (top) {
		printf("%d\n", pop(&top));
	}
	return 0;
}
void push(stack_ptr* top, int data)
{
	//if(²ËÃ¡À» ¶§.. °ÅÀÇ X)
	stack_ptr temp = (stack_ptr)malloc(sizeof(stack));
	temp->data = data;
	temp->link = *top;
	*top = temp;
}
void print(stack_ptr top)
{
	stack_ptr temp;
	for (temp = top; temp; temp = temp->link) {
		printf("%d ", temp->data);
	}
	printf("\n");
}
int pop(stack_ptr* top)
{
	stack_ptr temp = *top;
	int data;

	if (!temp) {
		printf("The stack is empty");
		exit(1);
	}

	data = temp->data;
	*top = temp->link;
	free(temp);
	return data;
}