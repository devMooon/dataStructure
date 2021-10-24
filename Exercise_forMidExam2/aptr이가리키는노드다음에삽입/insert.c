#include <stdio.h>

struct node
{
	int data;
	struct node* link;
};
typedef struct node list_node;
typedef struct node* list_ptr;

list_ptr create(int size);
void print(list_ptr ptr);
void insert(list_ptr* ptr, list_ptr aptr, int x);

int main(void)
{
	list_ptr ptr;
	ptr = create(10);
	print(ptr);

	list_ptr aptr = ptr->link->link->link; //4 + 1번 노드에 넣을 거임

	insert(&ptr, aptr, 3);
	print(ptr);
	return 0;
}
list_ptr create(int size)
{
	list_ptr temp = NULL;
	list_ptr before = NULL;

	for (int i = 0; i < size; i++) {
		temp = (list_ptr)malloc(sizeof(list_node));
		temp->data = (i + 1) * 10;
		temp->link = before;
		before = temp;
	}
	return temp;
}
void print(list_ptr ptr)
{
	list_ptr temp;
	for (temp = ptr; temp; temp = temp->link) {
		printf("%d ", temp->data);
	}
	printf("\n");
}
void insert(list_ptr* ptr, list_ptr aptr, int x)
{
	list_ptr temp = (list_ptr)malloc(sizeof(list_node));
	temp->data = x;

	if (*ptr) {
		temp->link = aptr->link;
		aptr->link = temp;
	}
	else {
		temp->link = NULL;
		*ptr = temp;

	}
}