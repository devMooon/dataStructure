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
void delete(list_ptr* ptr, list_ptr trail, list_ptr node);

int main(void)
{
	list_ptr ptr;
	ptr = create(10);
	print(ptr);

	list_ptr trail = ptr->link->link->link;
	list_ptr node = ptr->link->link->link->link; //5번원소삭제

	delete(&ptr, trail, node);
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
void delete(list_ptr* ptr, list_ptr trail, list_ptr node)
{
	if (node == *ptr) {
		*ptr = node->link;
	}
	else {
		trail->link = node->link;
	}
}