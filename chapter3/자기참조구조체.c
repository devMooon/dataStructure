#include <stdio.h>

typedef struct list {
	char data;
	struct list* link;
};

int main(void)
{
	list item1, item2, item3;
	item1.data = 'A';
	item2.data = 'B';
	item3.data = 'C';
	printf("%p %p %p", item1.link, item2.link, item3.link);

	return 0;
}