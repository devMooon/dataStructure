#include <stdio.h>
struct node {
	int data;
	struct node* link;
};
typedef struct node list_node;
typedef struct node* list_ptr;

int main(void)
{
	list_ptr first, second, third;
	first = (list_ptr)malloc(sizeof(list_node));
	second = (list_ptr)malloc(sizeof(list_node));
	third = (list_ptr)malloc(sizeof(list_node));

	first->data = 10; second->data = 20; third->data = 30;
	first->link = second; second->link = third; third->link = NULL;

	printf("%d %d %d", first->data, first->link->data, first->link->link->data);

	return 0;
}