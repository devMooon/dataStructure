
/* DBLAB circularlist.c */
#include <stdio.h>
#include <malloc.h>

struct node {
    int data;
    struct node* link;
};
typedef struct node list_node;
typedef list_node* list_ptr;

list_ptr create(int n) {
    list_ptr first = NULL, temp = NULL;
    int i;
    for (i = 0; i < n; i++)
    {
        temp = (list_ptr)malloc(sizeof(list_node));
        temp->data = (i + 1); /* ����Ʈ�� �� */
        temp->link = first; /* ���ο� ��带 ����Ʈ�� �� �տ� �����Ѵ�. */
        first = temp;
    }

    for (temp = first; temp->link; )
    {
        temp = temp->link;
    }
    temp->link = first;
    return temp; /* ������ ��� ������ ��ȯ */
}
void delete_first(list_ptr* ptr)
{
    if ((*ptr) == NULL) { printf("���� ����...\n"); }
    else {
        list_ptr temp = (list_ptr)malloc(sizeof(list_node));
        temp = (*ptr)->link;
        if (temp == (*ptr)) (*ptr) = NULL;
        else {
            (*ptr)->link = temp->link;
            free(temp);
        }
    }
}

int add(list_ptr ptr) {
    list_ptr last = ptr; int s = 0;
    printf("The list contains: ");
    do
    {
        ptr = ptr->link; s = s + ptr->data;
        printf("%4d", ptr->data);
    } while (ptr != last);
    return s;
}
void print_list(list_ptr ptr) {
    list_ptr last = ptr;
    printf("The list contains: ");
    do
    {
        ptr = ptr->link;
        printf("%4d", ptr->data);
    } while (ptr != last);
    printf("\n");
}

int main()
{
    list_ptr ptr = NULL;
    ptr = create(4); /* 4���� ��带 ���� ���Ḯ��Ʈ�� ����� */
    print_list(ptr);
    printf("\naddition %d\n", add(ptr));
    delete_first(&ptr);
    delete_first(&ptr);
    delete_first(&ptr);
    delete_first(&ptr);
    delete_first(&ptr);
    print_list(ptr);
   
}
