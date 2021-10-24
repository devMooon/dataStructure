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
int find(list_ptr p, int k);

int main(void)
{
	list_ptr p;
	p = create(10);
	print(p);

	int k = 4;
	int result = find(p, k);

	printf("%d번째 요소의 값은 %d입니다.", k, result);

	return 0;
}
list_ptr create(int size)
{
	list_ptr first;
	list_ptr temp = NULL;
	list_ptr before = NULL;
	
	for (int i = 0; i < size; i++) {
		temp = (list_ptr)malloc(sizeof(list_node));
		temp->data = rand() % 100;
		temp->link = before;
		before = temp;
	}
	first = temp;
	return first;
}
void print(list_ptr p)
{
	list_ptr temp;
	for (temp = p; temp; temp = temp->link) {
		printf("%d ", temp->data);
	}
	printf("\n");
}
int find(list_ptr p, int k)
{
	list_ptr temp;
	temp = p;
	for (int i = 0; i < k - 1; i++)
		temp = temp->link;

	return temp->data;
}