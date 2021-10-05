//컴퓨터공학전공 20200675 문서연
// 프로그램 4-3 원형 큐 : circularqueue.c
#include <stdio.h>
#define MAX_QUEUE_SIZE  8
int queue[MAX_QUEUE_SIZE]; //큐 배열의 크기 8, 원소는 7개까지 들어간다.
int front = 0, rear = 0;

void clear_queue(void) // 큐를 모두 비우는 함수 
{
    front = rear = 0;
}

void print_queue(void) // 큐의 내용을 출력하는 함수
{
    int i;
    printf("*Queue 내용 : ");
    for (i = ((front + 1) % MAX_QUEUE_SIZE); i != (rear + 1); i = (++i) % MAX_QUEUE_SIZE)
        printf("%-3d", queue[i]); printf("\n");
}

int insert(int k) //큐에 원소 k를 삽입한다 
{
    if (front == (rear + 1) % MAX_QUEUE_SIZE)  //queue is full ? 가득 참
    {
        printf("\n*Queue overflow.\n");
        return -1;
    }
    rear = (rear + 1) % MAX_QUEUE_SIZE;
    queue[rear] = k;
    printf("front=%d, rear=%d, 원소수=%d\n", front, rear,
        (rear - front + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE);
    return k;
}

int delete(void)
{
    int i;
    if (front == rear)   //queue is empty ? 큐가 비어 있음
    {
        printf("\n Queue underflow.");
        return -1;
    }
    front = (front + 1) % MAX_QUEUE_SIZE;
    printf("front=%d, rear=%d, 원소수=%d\n", front, rear,
        (rear - front + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE);
    return queue[front];
}

void main(void) //큐를 테스트하는 프로그램
{
    int i;
    printf("front=%d, rear=%d, 원소수=%d\n", front, rear,
        (rear - front) % MAX_QUEUE_SIZE);
    // 삽입 테스트 
    printf("Insert 5 => "); insert(5);
    printf("Insert 4 => "); insert(4);
    printf("Insert 7 => "); insert(7);
    printf("Insert 8 => "); insert(8);
    print_queue(); //원소의 개수 4개\

    printf("Delete   => "); i = delete();
    printf("         => Deleted value is %d\n", i);
    print_queue(); //원소의 개수 3개\

    printf("Insert 3 => "); insert(3);
    printf("Insert 2 => "); insert(2);
    printf("Insert 5 => "); insert(5);
    printf("Insert 9 => "); insert(9);
    print_queue();

    printf("*Now queue is full\n");
    printf("Insert 3 => "); insert(3);
    print_queue(); //삽입 불가능]

    printf("*Initialize queue\n");
    clear_queue();
    print_queue(); //원소 개수 0 개

    printf("*Now queue is empty\n");
    printf("Delete   => "); i = delete();
    printf("       => Return Value is %d\n", i);
}