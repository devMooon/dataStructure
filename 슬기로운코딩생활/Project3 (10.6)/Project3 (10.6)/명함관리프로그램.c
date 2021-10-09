#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define NAME_SIZE 50
#define TEL_SIZE 20

typedef struct {
	char name[NAME_SIZE];
	char company[NAME_SIZE];
	char telephone[TEL_SIZE];
} card;

//�޴��� ����Ѵ�.
void print_menu(int* num);
//����ڿ��� ������ �޾Ƶ鿩 �迭�� ������ ���ҷ� �����Ѵ�.
void input_card(void);
//�迭�� ī�带 �����ϰ� ��� �����͸� ��ĭ�� ������ �̵�
int delete_card(char* s);
//ī���� �����͸� �˻�
int search_card(char* s);
//ī���� �����͸� ���
void print_card(int index);
//ī���� ��� �����͸� ���
void print_card_all(void);

card cards[100]; //���� ���� �迭
int top = 0;

int main(void)
{
	printf("NAMECARD Manager(���԰���)\n");
	printf("--------------------------\n");

	int select_menu = -1;
	char search_name[NAME_SIZE];
	int find_index;
	int i;

	print_menu(&select_menu);

	while ((i = select_menu) != 5) {
		
		

		switch (i) {
		case 1: 
			input_card();
			break;
		case 2:
			printf("\n�̸� : ");
			scanf("%s", search_name);
			if (!delete_card(search_name))
				printf("\nã�� ����\n");
			break;
		case 3:
			printf("\n�̸� : ");
			scanf("%s", search_name);
			find_index = search_card(search_name);

			if (find_index == -1) {
				printf("\nã�� ����\n");
				break;
			}
			print_card(find_index);
			break;
		case 4:
			print_card_all();
			break;


		printf("\n\nProgram ����...");
		}

		print_menu(&select_menu);
	}
	return 0;
}

void print_menu(int* num)
{
	printf("\n1. �Է�(����)\n");
	printf("2. ����(����)\n");
	printf("3. �˻�(����)\n");
	printf("4. ��ü���(����)\n");
	printf("5. ����\n");
	printf("\n");
	printf("��� ���� => ");
	scanf("%d", num);
}
void input_card(void)
{
	printf("�����Է�:\n");
	printf("  �̸� : ");
	scanf("%s", cards[top].name);
	printf("  ȸ�� : ");
	scanf("%s", cards[top].company);
	printf("  ��ȭ : ");
	scanf("%s", cards[top].telephone);

	top++;
}

int delete_card(char* s)
{
	int i;
	int index = search_card(s);
	if (index == -1) return 0;
	for (i = index; i < top; i++) {
		strcpy(cards[i].name, cards[i + 1].name);
		strcpy(cards[i].company, cards[i + 1].company);
		strcpy(cards[i].telephone, cards[i + 1].telephone);
	}
	top--;
	return 1;
}

int search_card(char* name)
{
	int i;
	int num = -1;

	for (i = 0; i <= top; i++) {
		if (strcmp(cards[i].name,name)==0) {
			return i;
		}
	}
	return -1;
}

void print_card(int index)
{
	printf("�̸�\tȸ��\t��ȭ\n");
	printf("--------------------------\n");
	printf("%s\t%s\t%s\n", cards[index].name, cards[index].company, cards[index].telephone);
	printf("\n");
}

void print_card_all(void)
{
	printf("�̸�\tȸ��\t��ȭ\n");
	printf("--------------------------\n");
	for (int k = 0; k < top; k++) {
		printf("%s\t%s\t%s\n", cards[k].name, cards[k].company, cards[k].telephone);
	}
	printf("\n");
}
