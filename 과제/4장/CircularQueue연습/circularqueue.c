//��ǻ�Ͱ������� 20200675 ������
// ���α׷� 4-3 ���� ť : circularqueue.c
#include <stdio.h>
#define MAX_QUEUE_SIZE  8
int queue[MAX_QUEUE_SIZE]; //ť �迭�� ũ�� 8, ���Ҵ� 7������ ����.
int front = 0, rear = 0;

void clear_queue(void) // ť�� ��� ���� �Լ� 
{
    front = rear = 0;
}

void print_queue(void) // ť�� ������ ����ϴ� �Լ�
{
    int i;
    printf("*Queue ���� : ");
    for (i = ((front + 1) % MAX_QUEUE_SIZE); i != (rear + 1); i = (++i) % MAX_QUEUE_SIZE)
        printf("%-3d", queue[i]); printf("\n");
}

int insert(int k) //ť�� ���� k�� �����Ѵ� 
{
    if (front == (rear + 1) % MAX_QUEUE_SIZE)  //queue is full ? ���� ��
    {
        printf("\n*Queue overflow.\n");
        return -1;
    }
    rear = (rear + 1) % MAX_QUEUE_SIZE;
    queue[rear] = k;
    printf("front=%d, rear=%d, ���Ҽ�=%d\n", front, rear,
        (rear - front + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE);
    return k;
}

int delete(void)
{
    int i;
    if (front == rear)   //queue is empty ? ť�� ��� ����
    {
        printf("\n Queue underflow.");
        return -1;
    }
    front = (front + 1) % MAX_QUEUE_SIZE;
    printf("front=%d, rear=%d, ���Ҽ�=%d\n", front, rear,
        (rear - front + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE);
    return queue[front];
}

void main(void) //ť�� �׽�Ʈ�ϴ� ���α׷�
{
    int i;
    printf("front=%d, rear=%d, ���Ҽ�=%d\n", front, rear,
        (rear - front) % MAX_QUEUE_SIZE);
    // ���� �׽�Ʈ 
    printf("Insert 5 => "); insert(5);
    printf("Insert 4 => "); insert(4);
    printf("Insert 7 => "); insert(7);
    printf("Insert 8 => "); insert(8);
    print_queue(); //������ ���� 4��\

    printf("Delete   => "); i = delete();
    printf("         => Deleted value is %d\n", i);
    print_queue(); //������ ���� 3��\

    printf("Insert 3 => "); insert(3);
    printf("Insert 2 => "); insert(2);
    printf("Insert 5 => "); insert(5);
    printf("Insert 9 => "); insert(9);
    print_queue();

    printf("*Now queue is full\n");
    printf("Insert 3 => "); insert(3);
    print_queue(); //���� �Ұ���]

    printf("*Initialize queue\n");
    clear_queue();
    print_queue(); //���� ���� 0 ��

    printf("*Now queue is empty\n");
    printf("Delete   => "); i = delete();
    printf("       => Return Value is %d\n", i);
}