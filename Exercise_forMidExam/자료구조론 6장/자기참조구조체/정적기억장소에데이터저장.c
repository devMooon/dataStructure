#include <stdio.h>
struct node {
	int data;
	struct node* link;
};
typedef struct node list_node; //node �ĺ���
typedef struct node* list_ptr; //node�� ����Ű�� ������
int main(void)
{
	list_node item1, item2, item3;
	item1.link = item2.link = item3.link = NULL;
	item1.link = &item2;
	item2.link = &item3;

	item1.data = 10; item2.data = 20; item3.data = 30;
	
	return 0;
}