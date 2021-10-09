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

//메뉴를 출력한다.
void print_menu(int* num);
//사용자에게 명함을 받아들여 배열의 마지막 원소로 저장한다.
void input_card(void);
//배열의 카드를 삭제하고 모든 데이터를 한칸씩 앞으로 이동
int delete_card(char* s);
//카드의 데이터를 검색
int search_card(char* s);
//카드의 데이터를 출력
void print_card(int index);
//카드의 모든 데이터를 출력
void print_card_all(void);

card cards[100]; //명함 저장 배열
int top = 0;

int main(void)
{
	printf("NAMECARD Manager(명함관리)\n");
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
			printf("\n이름 : ");
			scanf("%s", search_name);
			if (!delete_card(search_name))
				printf("\n찾지 못함\n");
			break;
		case 3:
			printf("\n이름 : ");
			scanf("%s", search_name);
			find_index = search_card(search_name);

			if (find_index == -1) {
				printf("\n찾지 못함\n");
				break;
			}
			print_card(find_index);
			break;
		case 4:
			print_card_all();
			break;


		printf("\n\nProgram 종료...");
		}

		print_menu(&select_menu);
	}
	return 0;
}

void print_menu(int* num)
{
	printf("\n1. 입력(명함)\n");
	printf("2. 삭제(명함)\n");
	printf("3. 검색(명함)\n");
	printf("4. 전체출력(명함)\n");
	printf("5. 종료\n");
	printf("\n");
	printf("명령 선택 => ");
	scanf("%d", num);
}
void input_card(void)
{
	printf("명함입력:\n");
	printf("  이름 : ");
	scanf("%s", cards[top].name);
	printf("  회사 : ");
	scanf("%s", cards[top].company);
	printf("  전화 : ");
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
	printf("이름\t회사\t전화\n");
	printf("--------------------------\n");
	printf("%s\t%s\t%s\n", cards[index].name, cards[index].company, cards[index].telephone);
	printf("\n");
}

void print_card_all(void)
{
	printf("이름\t회사\t전화\n");
	printf("--------------------------\n");
	for (int k = 0; k < top; k++) {
		printf("%s\t%s\t%s\n", cards[k].name, cards[k].company, cards[k].telephone);
	}
	printf("\n");
}
