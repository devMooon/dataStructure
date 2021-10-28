#include <stdio.h>
struct node
{
	int data;
	struct node* link;
};

typedef struct node list_node;
typedef struct node* list_ptr;

list_ptr creat(int size);
void print_list(list_ptr p);
void insert(list_ptr p, int data);
int delete(list_ptr p, int k);

int length(list_ptr p); //리스트가 비어있으면 0출력


int main(void)
{
	list_ptr p;
	p = creat(5);
	print_list(p);
	

	insert(p, 15);
	insert(p, 25);
	insert(p, 35);
	print_list(p);

	printf("delete %d\n", delete(p, 25));
	printf("delete %d\n", delete(p, 35));
	print_list(p);

	printf("length %d\n", length(p));

	return 0;
}


list_ptr creat(int size)
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
void print_list(list_ptr p)
{
	list_ptr temp;
	for (temp = p; temp; temp = temp->link) {
		printf("%d ", temp->data);
	}
	printf("\n");
}
void insert(list_ptr p, int data)
{
	list_ptr temp = NULL;
	list_ptr before = NULL;

	for (temp = p; temp; temp = temp->link) {
		if (temp->data < data) {
			temp = (list_ptr)malloc(sizeof(list_node));
			temp->data = data;
			temp->link = before->link;
			before->link = temp;
			break;
		}
		before = temp;
	}
}
int delete(list_ptr p, int k)
{
	list_ptr temp;
	list_ptr before = NULL;
	int data;

	for (temp = p; temp; temp = temp->link) {
		if (temp->data == k) {
			before->link = temp->link;
			data = temp->data;
			free(temp);
			return data;
		}
		before = temp;
	}
}
int length(list_ptr p)
{
	list_ptr temp;
	int count = 0;
	for (temp = p; temp; temp = temp->link)count++;
	return count;
}