#include <stdio.h>
#define MAX 100
typedef struct {
	int key;
} element;
element stack[MAX];
void push(int* top, element item);
element pop(int* top);

int main(void)
{
	element item;
	int top = -1;
	item.key = 5;
	push(&top, item);
	printf("pop = > %d\n", pop(&top).key);
	printf("pop = > %d\n", pop(&top).key);


	return 0;
}
void push(int* top, element item)
{
	if (*top == MAX - 1) exit();
	else {
		stack[++ * top] = item;
	}
}
element pop(int* top)
{
	element item;
	if (*top == -1) {
		item.key = 0;
		return item;
	}
	else {
		return stack[(*top)--];
	}
}