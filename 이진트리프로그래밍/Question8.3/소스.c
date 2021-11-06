#include <stdio.h>
#include <malloc.h>

struct tnode {
	int data;
	struct tnode* left_child;
	struct tnode* right_child;
};
typedef struct tnode node;
typedef node* tree_ptr;

tree_ptr insert(tree_ptr head)
{
	tree_ptr tnodes[5];
	tree_ptr temp = NULL;
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		tnodes[i] = (tree_ptr)malloc(sizeof(node));
		tnodes[i]->data = i;
		tnodes[i]->left_child = tnodes[i]->right_child = NULL;
	}

	head = tnodes[0];
	tnodes[0]->left_child = tnodes[1];
	tnodes[0]->right_child = tnodes[2];
	tnodes[1]->right_child = tnodes[3];
	tnodes[2]->left_child = tnodes[4];
	return head;

}

void inorder(tree_ptr ptr)
{
	if (ptr)
	{
		inorder(ptr->left_child);
		printf("%d ", ptr->data);
		inorder(ptr->right_child);
	}
}

int main()
{
	tree_ptr head = NULL;
	head = insert(head);

	inorder(head);
}