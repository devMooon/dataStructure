/*#include <stdio.h>
#define MAX 5

typedef struct {
	int key;
}element;
element stack[MAX];

void push(int* top, element item);
element pop(int* top);

void push(int* top, element item)
{
	if (*top >= MAX - 1) {
		printf("������ �� á���ϴ�!\n");
		return;
	}
	stack[++*top].key = item.key;
}
element pop(int* top)
{
	if (*top < 0) {
		printf("������ ������ϴ�!\n");
		return; //�� ��ȯ �ؾ�����? �׸��� ��ȯ�� ���� ���ο��� ��� ��������?
	}
	return stack[*top--];
}
element top(int top) {
	element item;
	if (top == -1) {
		//������ ������� �� key���� 0���� ��ȯ //��ȯ�� ���� ���ο��� ��� ��������?
		item.key = 0;
		return item;
	}
	//2
	return stack[top];
}

void print_stack(int top)
{
	for (int i = 0; i < top; i++) {
		printf("%d ", stack[i].key);
	}
	printf("\n");
}
main()
{
	int top = -1;

	element item, item1, item2, item3, item4, item5;
	item.key = 0;
	item1.key = 1;
	item2.key = 2;
	item3.key = 3;
	item4.key = 4;
	item5.key = 5;

	pop(&top);
	push(&top, item); print_stack(top);
	push(&top, item1); print_stack(top);
	push(&top, item2); print_stack(top);
	push(&top, item3); print_stack(top);
	push(&top, item4); print_stack(top);
	push(&top, item5); print_stack(top);
}*/