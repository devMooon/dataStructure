#include <stdio.h>
#define MAX_SIZE 5
int stack1[MAX_SIZE];
int stack2[MAX_SIZE];
int top1 = -1;
int top2 = -1;



int isEmpty1(void)
{
	if (top1 < 0) return 1;
	else return 0;
}
int isEmpty2(void)
{
	if (top2 < 0) return 1;
	else return 0;
}



int isFull1(void)
{
	if (top1 >= MAX_SIZE - 1) return 1;
	else return 0;
}
int isFull2(void)
{
	if (top2 >= MAX_SIZE - 1) return 1;
	else return 0;
}



void push1(int item)
{
	if (isFull1() == 1) printf("Stack is full!\n");
	else stack1[++top1] = item;
}
void push2(int item)
{
	if (isFull2() == 1) printf("Stack is full!\n");
	else stack2[++top2] = item;
}



int pop1(void)
{
	if (isEmpty1() == 1) {
		printf("Stack is empty!\n");
		return -1;
	}
	else return stack1[top1--];
}
int pop2(void)
{
	if (isEmpty2() == 1) {
		printf("Stack is empty!\n");
		return -1;
	}
	else return stack2[top2--];
}




int main(void)
{
	//마을버스 4개
	printf("push1 => 10\n");  push1(10);
	printf("push1 => 81\n");  push1(81);
	printf("push1 => 9302\n");  push1(9302);
	printf("push1 => 87\n");  push1(87);

	//프로야구팀의 선수 번호 4개 입력
	printf("push2 => 1\n");  push2(1);
	printf("push2 => 2\n");  push2(2);
	printf("push2 => 3\n");  push2(3);
	printf("push2 => 4\n");  push2(4);

	printf("pop1 => %d\n", pop1());
	printf("pop2 => %d\n", pop2());
	printf("pop1 => %d\n", pop1());
	printf("pop2 => %d\n", pop2());
	printf("pop1 => %d\n", pop1());
	printf("pop2 => %d\n", pop2());
	printf("pop1 => %d\n", pop1());
	printf("pop2 => %d\n", pop2());

	return 0;
}