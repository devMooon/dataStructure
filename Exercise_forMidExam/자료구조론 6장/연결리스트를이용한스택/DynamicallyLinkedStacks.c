/*#include <stdio.h>
#define MAX_STACKS 10
struct node {
	int item;
	struct node* link;
};
typedef struct node stack;
typedef struct node* stack_ptr;
stack_ptr top;

void push(stack_ptr* top, int data);
int pop(stack_ptr* top);

int main(void)
{
	int e;
	push(&top, 20);
	push(&top, 40);
	push(&top, 40);
	push(&top, 60);
	push(&top, 20);

	return 0;
}
void push(stack_ptr* top, int data) 
{
	stack_ptr temp = (stack_ptr)malloc(sizeof(stack));
	
	temp->item = data;
	temp->link = *top;
	*top = temp;
}
int pop(stack_ptr* top) 
{
	stack_ptr temp = *top;
	int data;
	
	data = temp->item;
	*top = temp->link;
	free(temp);
	return data;
}*/