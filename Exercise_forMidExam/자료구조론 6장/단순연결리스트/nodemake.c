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
	//가장 처음 node를 가리키는 ptr 포인터를 생성
	list_ptr ptr;
	//이전 노드의 주소를 알려주는 helper before 포인터를 생성 첫 시작은 접지여야 하니 NULL값으로 초기화
	list_ptr before = NULL;

	for (i = 1; i <= 4; i++) {
		//ptr에 동적기억저장소 할당 (첫번째 노드)
		ptr = (list_ptr)malloc(sizeof(list_node));
		//ptr이 가리키는 저장소에 data값 할당
		ptr->data = i * 10;
		//ptr이 가리키는 저장소에 link값 할당 before가 가리키는 주소 값을 넣어주면 됨
		ptr->link = before;
		//before가 현재 노드를 가리키게 해서 다음번 작업 때 주소를 전달할 수 있게 함
		before = ptr; //중요!
	}

	//현재 ptr은 가장 끝 원소를 가리키고 있음 
	for (; ptr; ptr=ptr->link) { //ptr = ptr > 0 == ptr != NULL //ptr은 NULL이 아니면 계속 참
		printf("%d\n", ptr->data);
	}

	return 0;
}*/