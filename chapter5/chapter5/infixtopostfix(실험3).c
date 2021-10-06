//��ǻ�Ͱ������� 20200675 ������
/* ���α׷� 5-1 ������-������ ��ȯ : infixtopostfix.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_STACK_SIZE 100 // maximum stack size
#define MAX_EXPR_SIZE 100 // max size of expression

typedef enum {
	lparen, rparen, plus, minus, times, divide,
	mod, eos, operand
} precedence;

char expr[MAX_EXPR_SIZE]; // input string
int top = -1;

precedence stack[MAX_STACK_SIZE];
// isp and icp arrays ? index is value of precedence lparen, rparen,
//	plus, minus, times, divide, mode, eos

void push(precedence item)
{
	if (top >= MAX_STACK_SIZE - 1) {
		printf("stack_full()\n");
		return;
	}
	stack[++top] = item;
}

precedence pop() {
	if (top == -1)
	{
		printf("stack_empty()\n");
	}
	return stack[(top)--];
}

int isempty()
{
	if (top == -1) return(1); else return(0);
}

int isfull()
{
	if (top >= MAX_STACK_SIZE - 1) return(1); else return(0);
}
static int isp[] = { 0,19,12,12,13,13,13,0 };
static int icp[] = { 20,19,12,12,13,13,13,0 }; // lparen ������ �켱���� ����

precedence get_token(char* symbol, int* n) {
	*symbol = expr[(*n)++];
	switch (*symbol) {
	case '(': return lparen;
	case ')': return rparen;
	case '+': return plus;
	case '-': return minus;
	case '/': return divide;
	case '*': return times;
	case '%': return mod;
	case ' ': return eos;
	default: return operand;
	}
}

precedence print_token(precedence  t) {
	switch (t) {
	case lparen: printf("( "); break;
	case rparen: printf(") "); break;
	case plus: printf("+ "); break;
	case minus: printf("- "); break;
	case divide: printf("/ "); break;
	case times: printf("* "); break;
	case mod: printf("% "); break;
	case eos: printf("eos "); break;
	default: printf("\n "); return(0);
	}
}

void print_stack() {
	for (int i = 0; i < top + 1; i++) {
		print_token(stack[i]);
	}
}

void postfix(void) {
	char symbol;
	precedence token;
	int n = 0;
	top = 0;
	stack[0] = eos; // ������ �ٴڿ� ����(eos)�� �ִ´�.
	for (token = get_token(&symbol, &n); token != eos; token = get_token(&symbol, &n))
	{
		if (token == operand); //printf("%c ", symbol);
		else if (token == rparen) {  // ������ ��ȣ ������ ���ÿ��� ��� pop..
			while (stack[top] != lparen) {
				//print_token(pop());
				pop();
				print_stack();
			}
			pop();
			print_stack();
		}
		else { // �����ڵ��� �켱 ���� ��..
			while (isp[stack[top]] >= icp[token]){
				//print_token(pop());
				pop();
				print_stack();
			}
			push(token);
			print_stack();
		}
		printf(" \n");
	}
	while ((token = pop()) != eos)
		print_stack();
		//print_token(token);
	printf(" \n");
}

int main()
{
	strcpy(expr, "3*(2+4)/4 "); // �Է��� �������� ����(eos)�� �д�.
	postfix();
}
