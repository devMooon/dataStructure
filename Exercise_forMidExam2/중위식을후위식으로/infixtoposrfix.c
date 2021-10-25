
/* 프로그램 5-1 중위식-후위식 변환 : infixtopostfix.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_STACK_SIZE 100 /* maximum stack size */
#define MAX_EXPR_SIZE 100 /* max size of expression */

typedef enum {
	lparen, rparen, plus, minus, times, divide,
	mod, eos, operand
} precedence;

char expr[MAX_EXPR_SIZE]; /* input string */
int top = -1;

precedence stack[MAX_STACK_SIZE];
/* isp and icp arrays ? index is value of precedence lparen, rparen,
	plus, minus, times, divide, mode, eos */

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
static int icp[] = { 20,19,12,12,13,13,13,0 }; // lparen 연산자 우선순위 조정

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

void postfix(void) {
	char symbol;
	precedence token;
	int n = 0;
	top = 0;
	stack[0] = eos; // 스택의 바닥에 공백(eos)를 넣는다.
	for (token = get_token(&symbol, &n); token != eos; token = get_token(&symbol, &n)) // 마지막 공백을 보고 수식의 끝을 알아냄
	{
		if (token == operand) printf("%c ", symbol);
		else if (token == rparen) {  // 오른쪽 괄호 만나면 왼쪽 괄호 전까지 스택에서 모두 pop..
			while (stack[top] != lparen)
				print_token(pop());
			pop(); // 왼쪽 괄호 빼기
		}
		else { // 연산자들의 우선 순위 비교..
			while (isp[stack[top]] >= icp[token]) // 스택에 있는 게 들어올 것보다 우선순위가 크면 * >= +
				print_token(pop()); // 들어올 값보다 우선순위가 작을 때까지 pop..
			push(token); // 들어올 값 push *
		}
	}

	//마무리,, 스택에 있는 값 모두 빼기
	while ((token = pop()) != eos)
		print_token(token);
	printf(" \n");
}

int main()
{
	strcpy(expr, "3+2*5-4 "); // 입력의 마지막에 공백(eos)을 둔다.
	postfix();
}
