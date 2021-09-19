/*#include <stdio.h>

struct list {
	char data;
	struct list* link;
};
typedef struct list list_node;

int main(void)
{
	list_node item1, item2, item3;
	item1.data = 'A';
	item2.data = 'B';
	item3.data = 'C';
	
	item1.link = item2.link = item3.link = NULL;
	item1.link = &item2;
	item2.link = &item3;
	item3.link = &item1;

	printf("&item1: %p,\t&item2 : %p,\t&item3 : %p\n", &item1, &item2, &item3);
	printf("item1.link : %p,\titem2.link : %p,\titem3.link : %p\n", item1.link, item2.link, item3.link);

	return 0;
}*/