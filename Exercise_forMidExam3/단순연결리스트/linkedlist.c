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
void insert(list_ptr ptr, int item);
void delete(list_ptr ptr, int item);

int main(void)
{
	list_ptr p = create(4);
	print(p);

	insert(p, 15);
	insert(p, 25);
	print(p);

	delete(p, 30);
	delete(p, 25);
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
void print(list_ptr ptr)
{
	list_ptr temp;
	for (temp = ptr; temp; temp = temp->link) {
		printf("%d ", temp->data);
	}
	printf("\n");
}
void insert(list_ptr ptr, int item)
{
	if (!ptr) return;
	list_ptr temp;
	list_ptr before = NULL;

	for (temp = ptr; temp; temp = temp->link) {
		if (temp->data < item) {
			temp = (list_ptr)malloc(sizeof(list_node));
			temp->data = item;
			temp->link = before->link;
			before->link = temp;
			break;
		}
		before = temp;
		
	}

}
void delete(list_ptr ptr, int item)
{

}