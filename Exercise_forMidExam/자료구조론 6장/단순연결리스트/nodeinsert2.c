/*#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node* link;
};
typedef struct node list_node;
typedef struct node* list_ptr;

list_ptr creat(int n);
void print(list_ptr ptr);
void insert(list_ptr* ptr, list_ptr aptr, int x);

int main(void)
{

	list_ptr p = creat(4);
	print(p);

	printf("\n");

	insert(p, p->link->link, 35);
	print(p);

	return 0;
}
list_ptr creat(int n)
{
	int i;
	list_ptr ptr = NULL;
	list_ptr before = NULL;

	for (i = 1; i <= n; i++) {
		ptr = (list_ptr)malloc(sizeof(list_node));
		ptr->data = i * 10;
		ptr->link = before;
		before = ptr;
	}
	return ptr;
}
void print(list_ptr ptr)
{
	for (; ptr; ptr = ptr->link) {
		printf("%d\n", ptr->data);
	}
}
void insert(list_ptr* ptr, list_ptr aptr, int x)
{//aptr�� ����Ű�� node ������ �����͸� ����
	list_ptr temp = (list_ptr)malloc(sizeof(list_node));
	temp->data = x;

	if (*ptr) {//���Ḯ��Ʈ�� �� ����Ʈ�� �ƴ� ��� //ptr != NULL
		temp->link = aptr->link;
		aptr->link = temp;
	}
	else {//���Ḯ��Ʈ�� ����ִ� ���
		temp->link = NULL;
		*ptr = temp;
	}
}*/