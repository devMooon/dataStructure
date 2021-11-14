#include <stdio.h>

struct node
{
	struct node* left_child;
	int data;
	struct node* right_child;
};

typedef struct node node;
typedef struct node* tree_ptr;

tree_ptr insert(tree_ptr head, int* number)
{
	tree_ptr tnodes[9];
	tree_ptr temp = NULL;
		int i = 0;

	for (i = 0; i < 9; i++)
	{
		tnodes[i] = (tree_ptr)malloc(sizeof(node));
		tnodes[i]->data = number[i];
		tnodes[i]->left_child = tnodes[i]->right_child = NULL;
	}

	head = tnodes[0];
	tnodes[0]->left_child = tnodes[1];
	tnodes[0]->right_child = tnodes[2];

	tnodes[1]->left_child = tnodes[3];
	tnodes[1]->right_child = tnodes[4];

	tnodes[2]->right_child = tnodes[5];

	tnodes[4]->left_child = tnodes[6];
	tnodes[4]->right_child = tnodes[7];

	tnodes[5]->left_child = tnodes[8];

	return head;
}

void inorder(tree_ptr ptr)
{
	if (ptr) {
		inorder(ptr->left_child);
		printf("%d ", ptr->data);
		inorder(ptr->right_child);
	}
}
void preorder(tree_ptr ptr)
{
	if (ptr) {
		preorder(ptr->left_child);
		preorder(ptr->right_child);
		printf("%d ", ptr->data);
	}
}
void postorder(tree_ptr ptr)
{
	if (ptr) {
		printf("%d ", ptr->data);
		postorder(ptr->left_child);
		postorder(ptr->right_child);
	}
}
int treesum(tree_ptr ptr)
{
	if (ptr) {
		return treesum(ptr->left_child) + treesum(ptr->right_child) + ptr->data;
	}
	else return 0;
}
int treenodecount(tree_ptr ptr)
{
	if (ptr) {
		return treenodecount(ptr->left_child) + treenodecount(ptr->right_child) + 1;
	}
	else return 0;
}
int max(int n1, int n2)
{
	if (n1 >= n2) return n1;
	else return n2;
}
int depth(tree_ptr ptr)
{          
	if (ptr) {
		return max(depth(ptr->left_child), depth(ptr->right_child)) + 1;
	}
	else return 0;
}
int leaf(tree_ptr ptr)
{
	if (ptr) {
		if (!ptr->left_child && !ptr->right_child) return 1;
		else return leaf(ptr->left_child) + leaf(ptr->right_child);
	}
	
	return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   

int main(void)
{
	int number[] = { 2, 7, 5, 2, 6, 9, 5, 11, 4 };
	tree_ptr head = NULL;

	head = insert(head, number);

	//중위탐색
	inorder(head); printf("\n");
	//후위탐색
	preorder(head); printf("\n");
	//전위탐색
	postorder(head); printf("\n");

	int treeSum = treesum(head);
	printf("트리의데이터합: %d\n", treeSum);

	int treeCount = treenodecount(head);
	printf("트리의노드개수: %d\n", treeCount);

	int treeDepth = depth(head);
	printf("트리의깊이: %d\n", treeDepth);

	int leafNode = leaf(head);
	printf("리프 노드의 수: %d\n", leafNode);
}