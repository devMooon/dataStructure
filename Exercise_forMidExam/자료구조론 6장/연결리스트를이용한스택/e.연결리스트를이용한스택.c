
/* ���α׷� 6-3, 6-4 ���Ḯ��Ʈ�� �̿��� ���� : linkedlist-stack.c */
#include <stdio.h>
#include <malloc.h>
#define MAX_STACK_SIZE 100

struct node {
	int item;
	struct node* link;
};
typedef struct node stack;
typedef stack* stack_ptr;

stack_ptr top = NULL;

void push(int data) {
	//�˰��� �ۼ�
}

int pop() {
	//�˰��� �ۼ�
}

int isempty()
{
	//�˰��� �ۼ�
}

int topelement(stack_ptr top) //���� ���� �ִ� ���Ҹ� ����ϴ� �Լ�
{
	//�˰��� �ۼ�
}
int main()
{
	int e;
	push(20);
	push(40);
	push(60);

	printf("���� ���� �ִ� ���� : %d\n", topelement(top));
	printf(" Begin Stack Test ...\n");

	while (!isempty())
	{
		e = pop();
		printf("value = %d\n", e);
	}


}