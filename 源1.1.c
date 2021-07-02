#include<stdio.h>
struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = { "C language program",55};
	printf("name is: %s\n",b1.name);
	printf("price is: %d\n", b1.price);
	return 0;
}