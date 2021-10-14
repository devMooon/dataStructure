#include <stdio.h>
#define MAX_SIZE 3
void push(int stack[], int* topP, int item);
int pop(int stack[], int* topP);
int isempty(int top);
int isfull(int top);

int main(void)
{
	int stack[MAX_SIZE];
	int top = -1;

	printf("pop %d\n", pop(stack, &top));
	printf("push 5\n"); push(stack, &top, 5);
	printf("push 4\n"); push(stack, &top, 4);
	printf("push 7\n"); push(stack, &top, 7);
	printf("push 9\n"); push(stack, &top, 9);
	printf("pop %d\n", pop(stack, &top));
	printf("pop %d\n", pop(stack, &top));
	printf("pop %d\n", pop(stack, &top));
	printf("pop %d\n", pop(stack, &top));
	
	return 0;
}
void push(int stack[], int* topP, int item)
{
	if (isfull(*topP) == 1) printf("Stack is full!\n");
	else stack[++ * topP] = item;
}
int pop(int stack[], int* topP)
{
	if (isempty(*topP) == 1) {
		printf("Stack is empty!\n");
		return -1;
	}
	else return stack[(*topP)--];
}
int isempty(int top)
{
	if (top < 0) return 1;
	else return 0;
}
int isfull(int top)
{
	if (top >= MAX_SIZE - 1) return 1;
	else return 0;
}