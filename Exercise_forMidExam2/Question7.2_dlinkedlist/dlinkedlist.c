
/* DBLAB dlinkedlist.c */
/* 이중연결리스트 실험, 데이터를 파일에서 읽으려면 comment 부분을 제거한다. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct node {
	char name;
	struct node* left, * right;
} NODE;

typedef struct node* node_ptr;

NODE* head; /*list의 양끝을 지시하는 Dummy node */
NODE* make_node();

make_dlist()
{
	NODE* new; NODE* before;
	int i;

	head = (NODE*)malloc(sizeof(NODE)); /* head 노드 생성 */
	head->left = head; head->right = head;

	before = head; /* 노드를 이중연결리스트 끝에 계속 연결 */
	for (i = 0; i < 4; i++)
	{
		new = (NODE*)malloc(sizeof(NODE));
		new->name = 'A' + i;
		new->left = before; new->right = head;
		before->right = new; head->left = new;
		before = new;
	}
}
int countaouble(node_ptr node) 
{
	if (node->right == node) return 0;
	else {
		node_ptr temp = (node_ptr)malloc(sizeof(node));
		int count = 0;

		for (temp = node->right; temp != node; temp = temp->right) count++;

		return count;
	}
}

main()
{
	NODE* p;
	make_dlist();
	puts("**** 입력된 순서대로 출력 ****");
	p = head->right;
	while (p != head) {
		printf("%c -> ", p->name);
		p = p->right;
	} printf("\n");

	puts("***역순 출력***");
	p = head->left;
	while (p != head) {
		printf("%c -> ", p->name);
		p = p->left;
	} printf("\n");

	printf("노드의 개수 : %d\n", countaouble(p));

	//getchar();
}