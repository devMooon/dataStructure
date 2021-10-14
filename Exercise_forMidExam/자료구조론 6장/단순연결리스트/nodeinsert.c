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
void insert(list_ptr ptr, int item);

int main(void)
{

	list_ptr p = creat(4);
	print(p);

	printf("\n");

	insert(p, 35);
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
void insert(list_ptr ptr, int item)
{
	list_ptr before = ptr;
	if (!ptr) return -1;
	for (; ptr; ptr = ptr->link) {
		if (ptr->data < item) {
			list_ptr temp = (list_ptr)malloc(sizeof(list_node));
			temp->data = item; temp->link = ptr;
			before->link = temp;
			break;
		}
		before = ptr;
	}
}*/
