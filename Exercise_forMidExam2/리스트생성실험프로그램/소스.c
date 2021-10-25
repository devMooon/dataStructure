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

int main(void)
{
	list_ptr p;
	p = creat(4);
	print_list(p);

	return 0;
}
list_ptr creat(int size)
{
	list_ptr first = NULL; //반환할 값! 노드 전체를 가리킬 첫번때 노드
	list_ptr temp = NULL; //새로 추가할 노드
	list_ptr before = NULL; //바로 전 노드를 가리키는 노드(link값 설정을 위해)

	for (int i = 0; i < size; i++) {
		temp = (list_ptr)malloc(sizeof(list_node));
		temp->data = (i + 1) * 10;
		temp->link = before;
		before = temp;
	}
	first = temp;
	return first;
}
void print_list(list_ptr p)
{
	list_ptr temp; //첫번째를 가리키는 노드는 변하면 안되니, 새로운 변수 하나 만듬
	for (temp = p; temp; temp = temp->link) {//temp = temp != NULL
		printf("%d ", temp->data);
	}
	printf("\n");
}