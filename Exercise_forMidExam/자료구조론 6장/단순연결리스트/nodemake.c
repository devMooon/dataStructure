/*#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node* link;
};
typedef struct node list_node;
typedef struct node* list_ptr;

int main(void)
{
	int i;
	//���� ó�� node�� ����Ű�� ptr �����͸� ����
	list_ptr ptr;
	//���� ����� �ּҸ� �˷��ִ� helper before �����͸� ���� ù ������ �������� �ϴ� NULL������ �ʱ�ȭ
	list_ptr before = NULL;

	for (i = 1; i <= 4; i++) {
		//ptr�� ������������ �Ҵ� (ù��° ���)
		ptr = (list_ptr)malloc(sizeof(list_node));
		//ptr�� ����Ű�� ����ҿ� data�� �Ҵ�
		ptr->data = i * 10;
		//ptr�� ����Ű�� ����ҿ� link�� �Ҵ� before�� ����Ű�� �ּ� ���� �־��ָ� ��
		ptr->link = before;
		//before�� ���� ��带 ����Ű�� �ؼ� ������ �۾� �� �ּҸ� ������ �� �ְ� ��
		before = ptr; //�߿�!
	}

	//���� ptr�� ���� �� ���Ҹ� ����Ű�� ���� 
	for (; ptr; ptr=ptr->link) { //ptr = ptr > 0 == ptr != NULL //ptr�� NULL�� �ƴϸ� ��� ��
		printf("%d\n", ptr->data);
	}

	return 0;
}*/