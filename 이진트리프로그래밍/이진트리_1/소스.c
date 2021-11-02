#include <stdio.h> 
struct tnode {
    int data;
    struct tnode* left_child;
    struct tnode* right_child;
};
typedef struct tnode node;
typedef node* tree_ptr;

int main()
{
    int i;
    tree_ptr head = NULL, temp = NULL;
    temp = (tree_ptr)malloc(sizeof(node));
    temp->data = 0;
    temp->left_child = NULL; temp->right_child = NULL;
    head = temp;

    temp = (tree_ptr)malloc(sizeof(node));
    temp->data = 1;
    temp->left_child = NULL; temp->right_child = NULL;
    head->left_child = temp;

    temp = (tree_ptr)malloc(sizeof(node));
    temp->data = 2;
    temp->left_child = NULL; temp->right_child = NULL;
    head->right_child = temp;

    temp = (tree_ptr)malloc(sizeof(node));
    temp->data = 3;
    temp->left_child = NULL; temp->right_child = NULL;
    head->left_child->right_child = temp;

    temp = (tree_ptr)malloc(sizeof(node));
    temp->data = 4;
    temp->left_child = NULL; temp->right_child = NULL;
    head->right_child->left_child = temp;

    printf("%d\n", head->right_child->left_child->data);

}

