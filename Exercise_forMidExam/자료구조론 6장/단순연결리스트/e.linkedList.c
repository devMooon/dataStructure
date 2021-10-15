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
void delete(list_ptr ptr, int item);//item를 찾아서 삭제
void delete2(list_ptr* ptr, list_ptr node, list_ptr trail); //node 앞의 데이터를 삭제
void insert(list_ptr ptr, int item); //정렬되어 있는 연결리스트에 데이터가 들어갈 자리를 찾아서 삽입
void insert2(list_ptr* ptr, list_ptr aptr, int x);//aptr이 가리키는 node 다음에 x를 삽입

int main(void)
{
	printf("***연결리스트***\n"); list_ptr p = creat(4); print(p);
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
	if (node == *ptr) {//연결리스트가 비어있지 않은 경우
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
{//aptr이 가리키는 node 다음에 데이터를 삽입
	list_ptr temp = (list_ptr)malloc(sizeof(list_node));
	temp->data = x;

	if (*ptr) {//연결리스트가 빈 리스트가 아닐 경우 //ptr != NULL
		temp->link = aptr->link;
		aptr->link = temp;
	}
	else {//연결리스트가 비어있는 경우
		temp->link = NULL;
		*ptr = temp;
	}
}*/