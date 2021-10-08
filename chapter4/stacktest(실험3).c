//컴퓨터공학전공 20200675 문서연
/*#include <stdio.h>
#define MAX_STACK_SIZE 100
int top = -1;

typedef struct {
	int bus;
	char player;
}stackelement;

stackelement element[MAX_STACK_SIZE];

void push(int item, char num)
{
	stackelement* e = &element[++top];

	if (top >= MAX_STACK_SIZE - 1) {
		printf("stack_full()\n");
		return;
	}
	e->bus = item;
	e->player = num;
	printf("%d", top);
}

stackelement pop() {
	if (top == -1)
	{
		printf("stack_empty()\n"); exit();
	}
	printf("%d", top);
	return element[top--];
}

int isempty()
{
	if (top == -1) return(1); else return(0);
}

int isfull()
{
	if (top >= MAX_STACK_SIZE - 1) return(1); else return(0);
}

int main()
{
	push(10, 'A');
	push(87, 'B');
	push(81, 'C');
	push(9302, 'D');

	while (!isempty())
	{
		stackelement e = pop();
		printf(" 마을버스 번호: %d, 야구선수 번호: %c ...\n", e.bus, e.player);
		
	}
}*/