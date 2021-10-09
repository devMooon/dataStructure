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
		printf("스택이 꽉 찼습니다!\n");
		return;
	}
	stack[++*top].key = item.key;
}
element pop(int* top)
{
	if (*top < 0) {
		printf("스택이 비었습니다!\n");
		return; //뭘 반환 해야하지? 그리고 반환한 값을 메인에서 어떻게 구별하지?
	}
	return stack[*top--];
}
element top(int top) {
	element item;
	if (top == -1) {
		//스택이 비어있을 때 key값을 0으로 반환 //반환한 값을 메인에서 어떻게 구별하지?
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