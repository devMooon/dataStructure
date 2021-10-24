
/* DBLAB dlinkedlist.c */
/* ���߿��Ḯ��Ʈ ����, �����͸� ���Ͽ��� �������� comment �κ��� �����Ѵ�. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct node {
	char name;
	struct node* left, * right;
} NODE;

typedef struct node* node_ptr;

NODE* head; /*list�� �糡�� �����ϴ� Dummy node */
NODE* make_node();

make_dlist()
{
	NODE* new; NODE* before;
	int i;

	head = (NODE*)malloc(sizeof(NODE)); /* head ��� ���� */
	head->left = head; head->right = head;

	before = head; /* ��带 ���߿��Ḯ��Ʈ ���� ��� ���� */
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
	puts("**** �Էµ� ������� ��� ****");
	p = head->right;
	while (p != head) {
		printf("%c -> ", p->name);
		p = p->right;
	} printf("\n");

	puts("***���� ���***");
	p = head->left;
	while (p != head) {
		printf("%c -> ", p->name);
		p = p->left;
	} printf("\n");

	printf("����� ���� : %d\n", countaouble(p));

	//getchar();
}