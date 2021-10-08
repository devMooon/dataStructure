//컴퓨터공학전공 20200675 문서연
#include <stdio.h>
#define MAX_QUEUE_SIZE 100
typedef struct {
	int key; //other fields
}element;
element queue[MAX_QUEUE_SIZE];

void queue_full(void)
{
	printf("큐가 full임");
}
void insertq(int* rear, element item) {
	if (*rear == MAX_QUEUE_SIZE - 1) {
		//3 원소의 개수는 0개~100개 사이의 값
		// 
		queue_full();
		//4
		// 원소의 개수가 100개가 아닌 경우인데 queue_full 함수가 호출된 경우에는, 원형큐를 사용해 큐의 빈 공간을 계속해서 사용할 수 있게 한다.
		//큐 원소를 모두 왼쪽으로 이동?
	}
	queue[++*rear] = item;
}
element deleteq(int* front, int rear) {
	if (*front == rear) {
		printf(" => Queue Full\n");
	}
	return queue[++ * front];
}
int main(void)
//큐를 테스트 하는 프로그램
{
	int rear = -1;
	int front = -1;
	element e1;
	//1
	e1.key = 5;
	insertq(&rear, e1);
	//2
	e1 = deleteq(&front, rear);
	printf("delete = > %d", e1.key);
	return 0;
}