#include <stdio.h>
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
	//�˰��� �ۼ�
}

void print(list_ptr ptr)
{
	//�˰��� �ۼ�
}

void delete(list_ptr ptr, int item)
{
	//�˰��� �ۼ�
}

void delete2(list_ptr* ptr, list_ptr node, list_ptr trail)
{
	//�˰��� �ۼ�
}

void insert(list_ptr ptr, int item)
{
	//�˰��� �ۼ�
}

void insert2(list_ptr* ptr, list_ptr aptr, int x)
{
	//�˰��� �ۼ�
}