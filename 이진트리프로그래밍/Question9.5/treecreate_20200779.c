
/* DBLAB treecreate.c */
#include <stdio.h>
#include <malloc.h>

struct tnode {
	int data;
	struct tnode* left_child;
	struct tnode* right_child;
};
typedef struct tnode node;
typedef node* tree_ptr;

int sum, cnt, depth1, depth2;
sum = 0;
cnt = 0;
depth1 = 0;
depth2 = 0;

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
	tnodes[0]->right_child = tnodes[6];
	tnodes[1]->left_child = tnodes[2];
	tnodes[1]->right_child = tnodes[3];
	tnodes[3]->left_child = tnodes[4];
	tnodes[3]->right_child = tnodes[5];
	tnodes[6]->right_child = tnodes[7];
	tnodes[7]->left_child = tnodes[8];

	return head;
}

void inorder(tree_ptr ptr) {
	if (ptr) {
		inorder(ptr->left_child);
		printf("%d ", ptr->data);
		inorder(ptr->right_child);
	}
}

void preorder(tree_ptr ptr) {
	if (ptr) {
		printf("%d ", ptr->data);
		preorder(ptr->left_child);
		preorder(ptr->right_child);
	}
}

void postorder(tree_ptr ptr) {
	if (ptr) {
		postorder(ptr->left_child);
		postorder(ptr->right_child);
		printf("%d ", ptr->data);
	}
}

int treesum(tree_ptr ptr) {
	if (ptr) {
		sum += ptr->data;
		treesum(ptr->left_child);
		treesum(ptr->right_child);
	}
	return sum;
}

int treenodecount(tree_ptr ptr) {
	if (ptr) {
		cnt += 1;
		treenodecount(ptr->left_child);
		treenodecount(ptr->right_child);
	}
	return cnt;
}

int treedepthL(tree_ptr ptr) {
	if (ptr) {
		treedepthL(ptr->left_child);
		depth1 += 1;
	}
	else return depth1;
}

int treedepthR(tree_ptr ptr) {
	if (ptr) {
		treedepthR(ptr->right_child);
		depth2 += 1;
	}
	return depth2;
}

int treedepth(tree_ptr ptr) {
	treedepthL(ptr);
	treedepthR(ptr);
	if (depth1 > depth2) return depth1 + 1;
	else return depth2 + 1;
}

tree_ptr copy(tree_ptr original) {
	tree_ptr temp;
	if (original) {
		temp = (tree_ptr)malloc(sizeof(node));
		//if (IS_FULL(temp)) exit(1);
		temp->left_child = copy(original->left_child);
		temp->right_child = copy(original->right_child);
		temp->data = original->data;
		return temp;
	}
	return NULL;
}

int equal(tree_ptr first, tree_ptr second) {
	return ((!first && !second) || (first && second && equal(first->left_child, second->left_child) && equal(first->right_child, second->right_child)));
}

int main()
{
	int i, number[9] = { 2, 7, 2, 6, 5, 11, 5, 9, 4 };
	tree_ptr head = NULL;
	/* 데이터9개 로 트리를 구성 */
	head = insert(head, number);

	/* 중위탐색->전위탐색->후위탐색 순 */
	inorder(head);
	printf("\n");
	preorder(head);
	printf("\n");
	postorder(head);
	printf("\n");

	//데이터 모두 더하는 함수
	printf("SUM RESULT = %d\n", treesum(head));
	//트리 노드 개수 세는 함수
	printf("Node Counts = %d\n", treenodecount(head));
	//트리의 깊이를 계산하는 함수
	printf("Depth = %d\n", treedepth(head));
}