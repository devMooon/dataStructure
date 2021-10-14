#include <stdio.h>
#define MAX_SIZE 4
typedef struct {
	int bus;
	char player;
} stackelement;

stackelement stack[MAX_SIZE];
int top = -1;

int isEmpty(void)
{
	if (top < 0) return 1;
	else return 0;
}
int isFull(void)
{
	if (top >= MAX_SIZE - 1) return 1;
	else return 0;
}
void push(stackelement item)
{
	if (isFull() == 1) printf("Stack is full!\n");
	else stack[++top] = item;
}
stackelement pop(void)
{
	if (isEmpty() == 1) {
		stackelement e = { -1, 'Z' };
		printf("Stack is empty!\n");
		return e;
	}
	else return stack[top--];
}
int main(void)
{
	stackelement e;

	e.bus = 10;    e.player = 'A';    printf("push => 10, A\n");      push(e);
	e.bus = 87;    e.player = 'B';    printf("push => 87, B\n");      push(e);
	e.bus = 9302;  e.player = 'C';    printf("push => 9302, C\n");    push(e);
	e.bus = 81;    e.player = 'D';    printf("push => 81, D\n");      push(e);

	printf("\n");

	e = pop(); printf("pop => %d, %c\n", e.bus, e.player);
	e = pop(); printf("pop => %d, %c\n", e.bus, e.player);
	e = pop(); printf("pop => %d, %c\n", e.bus, e.player);
	e = pop(); printf("pop => %d, %c\n", e.bus, e.player);

	return 0;
}