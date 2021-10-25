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
	list_ptr first = NULL; //��ȯ�� ��! ��� ��ü�� ����ų ù���� ���
	list_ptr temp = NULL; //���� �߰��� ���
	list_ptr before = NULL; //�ٷ� �� ��带 ����Ű�� ���(link�� ������ ����)

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
	list_ptr temp; //ù��°�� ����Ű�� ���� ���ϸ� �ȵǴ�, ���ο� ���� �ϳ� ����
	for (temp = p; temp; temp = temp->link) {//temp = temp != NULL
		printf("%d ", temp->data);
	}
	printf("\n");
}