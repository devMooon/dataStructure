#include <stdio.h>
#define LEN 20
#define M1 "Have a nice day with"
#define M2 "and have a much laughs."

typedef struct {
	char first[LEN];
	char last[LEN];
} names;
typedef struct {
	names handle;
	char friend[LEN];
	char job[LEN];
	float income;
} guy;
int main(void)
{
	guy fellow = {
		{"Park", "Cheolsoo"},
		"Kim",
		"student",
		15435.00
	};
	printf("Dear %s\n\n", fellow.handle.first);
	printf("Thank you %s\n", fellow.handle.first);
	printf("You are a %s\n", fellow.job);
	printf("with good records\n");
	printf("%s %s %s\n", M1, fellow.friend, M2);
	
	return 0;
}