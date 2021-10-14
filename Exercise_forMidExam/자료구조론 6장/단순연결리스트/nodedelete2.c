#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node* link;
};
typedef struct node list_node;
typedef struct node* list_ptr;

list_ptr creat(int n);
void print(list_ptr ptr);
void delete(list_ptr* ptr, list_ptr node, list_ptr trail);

int main(void)
{

	list_ptr p = creat(4);
	print(p);

	printf("\n");

	delete(p, p->link->link, p->link);
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
void delete(list_ptr* ptr, list_ptr node, list_ptr trail)
{
	if (node==*ptr) {//연결리스트가 비어있지 않은 경우
		*ptr = node->link;
	}
	else 
		trail->link = node->link;
}