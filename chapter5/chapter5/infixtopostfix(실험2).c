//컴퓨터공학전공 20200675 문서연
/* 프로그램 5-1 중위식-후위식 변환 : infixtopostfix.c */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_STACK_SIZE 100 // maximum stack size
#define MAX_EXPR_SIZE 100 // max size of expression

char expr[MAX_EXPR_SIZE]; // input string

int top = -1;
int stack[MAX_STACK_SIZE];

void push(int item)
{
	if (top >= MAX_STACK_SIZE - 1) {
		printf("stack_full()\n");
		return;
	}
	stack[++top] = item;
}

int pop() {
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

int get_token(char* symbol, int* n) {
	*symbol = expr[(*n)++];
	switch (*symbol) {
	case '(': return 0; // lparen;
	case ')': return 1; // rparen;
	case '+': return 2; // plus;
	case '-': return 3; // minus;
	case '/': return 4; // divide;
	case '*': return 5; // times;
	case '%': return 6; // mod;
	case ' ': return 7; // eos;
	default: return 8; // operand;
	}
}

void print_token(int  t) {
	switch (t) {
	case 0: printf("( "); break;
	case 1: printf(") "); break;
	case 2: printf("+ "); break;
	case 3: printf("- "); break;
	case 4: printf("/ "); break;
	case 5: printf("* "); break;
	case 6: printf("% "); break;
	case -1: printf("eos "); break;
	default: printf("\n "); return;
	}
}

void postfix(int num) {
	char symbol;
	int token;
	int n = -1;
	top = 0;
	stack[0] = -1; // 스택의 바닥에 공백(eos)를 넣는다.
	for (int i = 0; i < num; i++)
	{
		token = get_token(&symbol, &n);

		if (token == 8) printf("%c ", symbol);
		else if (token == 1) {  // 오른쪽 괄호 만나면 스택에서 모두 pop..
			while (stack[top] != 0)
				print_token(pop());
			pop();
		}
		else { // 연산자들의 우선 순위 비교..
			while (isp[stack[top]] >= icp[token])
				print_token(pop());
			push(token);
		}
	}
	while ((token = pop()) != -1)
		print_token(token);
	printf(" \n");
}

int main()
{
	strcpy(expr, "3+2*5-4 "); // 입력의 마지막에 공백(eos)을 둔다.
	postfix(8);
	strcpy(expr, "a+b*c-d "); // 입력의 마지막에 공백(eos)을 둔다.
	postfix(8);
}