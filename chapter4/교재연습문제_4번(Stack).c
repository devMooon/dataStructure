//��ǻ�Ͱ������� 20200675 ������
/*#include<stdio.h>
#define MAX 100
typedef struct {
	int key;
}element;

element stack[100];

void push(int* top, element item)
{
	if (*top == MAX - 1) {
		//exit();
	}
	//1
	stack[++*top] = item;
}

element pop(int* top)
{
	element item;
	if (*top == -1) {
		printf("������ ������ϴ�.\n");
		item.key = 0;
		return item;
	}
	return stack[(*top)--];
}

element stackTop(int* top) 
{
	element item;
	if (*top == -1){  //������ ����� �� key ���� 0���� ��ȯ
		item.key = 0;
		return item;
	}
	//���� �� ���� �ִ� ���Ҹ� ���ϴ� �Լ�
	return stack[*top];
}
void printStack(int top)
{
	printf("top : %d\n", top);
	for (int i = 0; i < MAX/10; i++){
		printf("%d ", stack[i].key);
	}
	printf("\n");
}

int main(void)
{
	element item;
	int top = -1;

	item.key = 5;
	printf("push 5 = >\n");
	push(&top, item);
	printStack(top);

	item.key = 6;
	printf("push 6 = >\n");
	push(&top, item);
	printStack(top);

	item.key = 7;
	printf("push 7 = >\n");
	push(&top, item);
	printStack(top);

	item.key = 8;
	printf("push 8 = >\n");
	push(&top, item);
	printStack(top);
	
	item = stackTop(&top);
	printf("\n\n���� �� ���� �ִ� ���� : %d\n\n", item.key);
	pop(&top);
	printStack(top);

	pop(&top);
	printStack(top);

	pop(&top);
	printStack(top);

	pop(&top);
	printStack(top);

	pop(&top);
	printStack(top);
	item = stackTop(&top);
	printf("\n\n���� �� ���� �ִ� ���� : %d\n\n", item.key);
	
	
	return 0;
}*/