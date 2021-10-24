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
int pop(stack_ptr* top);
int topelement(stack_ptr top);

int main(void)
{
	push(&top, 10);
	push(&top, 20);
	push(&top, 30);
	push(&top, 40);
	push(&top, 50);

	printf("제일 위에 있는 원소 %d\n", topelement(top));

	while (top) {
		printf("%d\n", pop(&top));
	}
	
	return 0;
}
void push(stack_ptr* top, int data)
{
	stack_ptr temp = (stack_ptr)malloc(sizeof(stack));
	temp->data = data;
	temp->link = *top;
	*top = temp;
}
int pop(stack_ptr* top)
{
	stack_ptr temp = *top;
	int data;

	if (!temp) {
		printf("The stack is empty!");
		exit(1);
	}
	data = temp->data;
	*top = temp->link;
	free(temp);
	return data;
}
int topelement(stack_ptr top)
{
	stack_ptr temp = top;
	int data;
	if (!temp) { return -1; }
	for (; temp->link; temp = temp->link);
	data = temp->data;
	return data;

}