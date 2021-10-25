#include <stdio.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push(int* top, int data);
int pop(int* top);

int main(void)
{
	//main�Լ��� ����
	push(&top, 10);
	push(&top, 20);
	push(&top, 30);
	push(&top, 40);
	push(&top, 50);

	while (top >= 0) {
		printf("%d\n", pop(&top));
	}
	return 0;
}
void push(int* top, int data)
{
	if (*top >= MAX) {
		printf("The stack is full"); //����Ʈ�� ���� ���� //���Ḯ��Ʈ�� ����
		exit(1);
	}
	stack[++ * top] = data;
}
int pop(int* top)
{
	if (top < 0) {
		printf("The stack is empty");
		exit(1);
	}
	return stack[(*top)--];
}