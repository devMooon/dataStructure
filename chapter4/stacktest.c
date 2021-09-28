
/* DBLAB stacktest.c */
/*#include <stdio.h>
#define MAX_STACK_SIZE 100
int stack1[MAX_STACK_SIZE];
int stack2[MAX_STACK_SIZE];
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
	int e1;
	push1(20);
	push1(40);
	push1(60);
	printf(" Begin Stack Test ...\n");
	while (!isempty1())
	{
		e1 = pop1();
		printf("value = %d\n", e1);
	}

	printf("\n");

	int e2;
	push2(20);
	push2(40);
	push2(60);
	printf(" Begin Stack Test ...\n");
	while (!isempty2())
	{
		e2 = pop2();
		printf("value = %d\n", e2);
	}

}*/