#include <stdio.h>

struct node
{
	int data;
	struct node* link;
};
typedef struct node list_node;
typedef struct node* list_ptr;

list_ptr create(int size);
void print(list_ptr p);
void insert(list_ptr p, int k);

int main(void)
{
	list_ptr p;
	p = create(4);
	print(p);
	insert(p, 35);
	print(p);

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
void print(list_ptr p)
{
	list_ptr temp;
	for (temp = p; temp; temp = temp->link) {
		printf("%d ", temp->data);
	}
	printf("\n");
}
void insert(list_ptr p, int k)
{
	list_ptr temp;
	list_ptr temp1;
	list_ptr before = NULL;

	if (!p) return;
	for (temp = p; temp; temp = temp->link) {
		if (temp->data < k) {
			temp1 = (list_ptr)malloc(sizeof(list_node));
			temp1->data = k;
			temp1->link = temp;
			before->link = temp1;
			break;
		}
		else { before = temp; }
	}
}