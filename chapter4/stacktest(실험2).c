//컴퓨터공학전공 20200675 문서연
/*#include <stdio.h>
#define MAX_STACK_SIZE 100
int stack1[MAX_STACK_SIZE];
char stack2[MAX_STACK_SIZE];
int top1 = -1;
int top2 = -1;

void push1(int item)
{
	if (top1 >= MAX_STACK_SIZE - 1) {
		printf("stack_full()\n");
		return;
	}
	stack1[++top1] = item;
}

int pop1() {
	if (top1 == -1)
	{
		printf("stack_empty()\n"); exit();
	}
	return stack1[(top1)--];
}

int isempty1()
{
	if (top1 == -1) return(1); else return(0);
}

int isfull1()
{
	if (top1 >= MAX_STACK_SIZE - 1) return(1); else return(0);
}


void push2(int item)
{
	if (top2 >= MAX_STACK_SIZE - 1) {
		printf("stack_full()\n");
		return;
	}
	stack2[++top2] = item;
}

int pop2() {
	if (top2 == -1)
	{
		printf("stack_empty()\n"); exit();
	}
	return stack2[(top2)--];
}

int isempty2()
{
	if (top2 == -1) return(1); else return(0);
}

int isfull2()
{
	if (top2 >= MAX_STACK_SIZE - 1) return(1); else return(0);
}
int main()
{
	int bus;
	push1(10);
	push1(87);
	push1(81);
	push1(9302);

	printf("\n");

	int baseball;
	push2('A');
	push2('B');
	push2('C');
	push2('D');

	while (!isempty1())
	{
		printf(" 마을버스 번호: %d, 야구선수 번호: %c ...\n", pop1(), pop2());
	}
}*/