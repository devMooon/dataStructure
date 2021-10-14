//���̰� 10�� ����Ʈ�� ����� k��° ����� ���� ã�� �Լ��� �ۼ��Ͽ���
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* link;
};
typedef struct node list_node;
typedef struct node* list_ptr;

list_ptr creat(int n);
void print(list_ptr ptr);
int find(list_ptr ptr, int k);

int main(void)
{
	list_ptr p = creat(20);
	print(p);
	int index = 7;
	int result = find(p, index);

	printf("%d��° ���� ��: %d\n", index, result);

	return 0;
}
list_ptr creat(int n)
{
	int i;
	list_ptr ptr = NULL; list_ptr before = NULL;

	for (i = 0; i < n; i++) {
		ptr = (list_ptr)malloc(sizeof(list_node));
		ptr->data = rand() % 100;
		ptr->link = before;
		before = ptr;
	}

	return ptr;
}
void print(list_ptr ptr)
{
	printf("���Ḯ��Ʈ ��: ");
	for (; ptr; ptr = ptr->link) {
		printf("%d ", ptr->data);
	}
	printf("\n");
}
int find(list_ptr ptr, int k)
{
	int i;
	for (i = 0; i < k - 1; i++) ptr = ptr->link;
	return ptr->data;
}