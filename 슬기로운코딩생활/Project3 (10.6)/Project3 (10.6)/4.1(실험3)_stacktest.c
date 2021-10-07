/*#include <stdio.h>
#define MAX_STACKELEMENT_NUM 5

typedef struct {
	int bus;
	char player;
}stackelement;
stackelement element[MAX_STACKELEMENT_NUM];
int top = -1;

void push(int bus, char player)
{
	//²ËÃ¡À¸¸é
	if (top >= MAX_STACKELEMENT_NUM - 1) {
		printf("stack is full!\n\t\t");
		return;
	}
	element[++top].bus = bus;
	element[top].player = player;
}
stackelement pop()
{
	//ºñ¾úÀ¸¸é
	if (top < 0) {
		printf("stack is empty!\t");
		return;
	}
	return element[top--];
}
void print_stack()
{
	for (int i = 0; i <= top; i++) {
		printf("%d, %c\t", element[i].bus, element[i].player);
	}
	printf("\n");
}
int main(void)
{
	
	printf("pop() =>\t"); pop(); print_stack();

	printf("push(1, 'A') =>\t"); push(1, 'A'); print_stack();
	printf("push(2, 'B') =>\t"); push(2, 'B'); print_stack();
	printf("push(3, 'C') =>\t"); push(3, 'C'); print_stack();

	printf("pop() =>\t"); stackelement popNum = pop(); print_stack();
	printf("\npopNum: %d, %c\n", popNum.bus, popNum.player);

	printf("push(4, 'D') =>\t"); push(4, 'D'); print_stack();
	printf("push(5, 'E') =>\t"); push(5, 'E'); print_stack();
	printf("push(6, 'F') =>\t"); push(6, 'F'); print_stack();
	printf("push(7, 'G') =>\t"); push(7, 'G'); print_stack();

	return 0;
}*/