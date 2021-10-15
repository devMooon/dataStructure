/*#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node* link;
};
typedef struct node list_node;
typedef struct node* list_ptr;

list_ptr creat(int n);
void print(list_ptr ptr);
void delete(list_ptr ptr, int item);//item�� ã�Ƽ� ����
void delete2(list_ptr* ptr, list_ptr node, list_ptr trail); //node ���� �����͸� ����
void insert(list_ptr ptr, int item); //���ĵǾ� �ִ� ���Ḯ��Ʈ�� �����Ͱ� �� �ڸ��� ã�Ƽ� ����
void insert2(list_ptr* ptr, list_ptr aptr, int x);//aptr�� ����Ű�� node ������ x�� ����

int main(void)
{
	printf("***���Ḯ��Ʈ***\n"); list_ptr p = creat(4); print(p);
	printf("delete 30\n"); delete(p, 30); print(p);
	printf("insert 5\n"); insert2(&p, p->link->link, 5); print(p);
	printf("insert 35\n"); insert(p, 35); print(p);
	printf("delete 20\n");  delete2(&p, p->link->link, p->link); print(p);

	return 0;
}

list_ptr creat(int n)
{
	int i;
	list_ptr ptr = NULL;
	list_ptr before = NULL;

	for (i = 1; i <= n; i++) {
		ptr = (list_ptr)malloc(sizeof(list_node));
		ptr->data = i * 10;
		ptr->link = before;
		before = ptr;
	}
	return ptr;
}

void print(list_ptr ptr)
{
	for (; ptr; ptr = ptr->link) {
		printf("%d\n", ptr->data);
	}
	printf("\n");
}

void delete(list_ptr ptr, int item)
{
	list_ptr before = ptr;

	if (!ptr) return;

	for (; ptr; ptr = ptr->link) {
		if (ptr->data == item) { before->link = ptr->link; break; };
		before = ptr;
	}
}

void delete2(list_ptr* ptr, list_ptr node, list_ptr trail)
{
	if (node == *ptr) {//���Ḯ��Ʈ�� ������� ���� ���
		*ptr = node->link;
	}
	else
		trail->link = node->link;
}

void insert(list_ptr ptr, int item)
{
	list_ptr before = ptr;
	if (!ptr) return;
	for (; ptr; ptr = ptr->link) {
		if (ptr->data < item) {
			list_ptr temp = (list_ptr)malloc(sizeof(list_node));
			temp->data = item; temp->link = ptr;
			before->link = temp;
			break;
		}
		before = ptr;
	}
}

void insert2(list_ptr* ptr, list_ptr aptr, int x)
{//aptr�� ����Ű�� node ������ �����͸� ����
	list_ptr temp = (list_ptr)malloc(sizeof(list_node));
	temp->data = x;

	if (*ptr) {//���Ḯ��Ʈ�� �� ����Ʈ�� �ƴ� ��� //ptr != NULL
		temp->link = aptr->link;
		aptr->link = temp;
	}
	else {//���Ḯ��Ʈ�� ����ִ� ���
		temp->link = NULL;
		*ptr = temp;
	}
}*/