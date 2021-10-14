#include <stdio.h>
#define MAX 3
typedef struct { int key; } element;
element stack[MAX];

void push(int* top, element item);
element pop(int* top);
element top(int* top);

int main(void)
{
	element item; int top = -1;

	//stack is empty
	printf("delete %d\n", pop(&top).key);

	//stack is full
	item.key = 5; printf("push %d\n", item.key); push(&top, item);
	item.key = 4; printf("push %d\n", item.key); push(&top, item);
	item.key = 3; printf("push %d\n", item.key); push(&top, item);
	item.key = 2; printf("push %d\n", item.key); push(&top, item);

	printf("delete %d\n", pop(&top).key);
	printf("delete %d\n", pop(&top).key);
	printf("delete %d\n", pop(&top).key);
	printf("delete %d\n", pop(&top).key);

	return 0;
}
void push(int* top, element item)
{
	if (*top == MAX - 1) printf("stack is full!\n");
	else stack[++ * top] = item;
}
element pop(int* top)
{
	if (*top < 0) {
		element item = { -1 };
		printf("stack is empty!\n");
		return item;
	}
	else return stack[(*top)--];
}
element top(int* top)
{
	element item;
	if (*top < 0) {
		item.key = 0;
		return item;
	}
	else return stack[*top];
}