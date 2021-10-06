#include <stdio.h>
#define MAX_STACKELEMENT_NUM 5

typedef struct {
	int bus;
	char player;
}stackelement;
stackelement element[MAX_STACKELEMENT_NUM];
top = -1;

void pop(int bus, char player)
{
	//²ËÃ¡À¸¸é
	if (top == MAX_STACKELEMENT_NUM - 1) {
		printf("stack is full!\n\t\t");
		return;
	}
	element[++top].bus = bus;
	element[top].player = player;
}
void push()
{
	//ºñ¾úÀ¸¸é
	if (top == -1) {
		printf("stack is empty!\t");
		return;
	}
	top--;
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
	
	printf("push() =>\t"); push(); print_stack();

	printf("pop(1, 'A') =>\t"); pop(1, 'A'); print_stack();
	printf("pop(2, 'B') =>\t"); pop(2, 'B'); print_stack();
	printf("pop(3, 'C') =>\t"); pop(3, 'C'); print_stack();

	printf("push() =>\t"); push(); print_stack();
	
	printf("pop(4, 'D') =>\t"); pop(4, 'D'); print_stack();
	printf("pop(5, 'E') =>\t"); pop(5, 'E'); print_stack();
	printf("pop(6, 'F') =>\t"); pop(6, 'F'); print_stack();
	printf("pop(7, 'G') =>\t"); pop(7, 'G'); print_stack();

	return 0;
}