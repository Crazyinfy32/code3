#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;
	printf("%p\n", &a);
	*p = 20;
	printf("%d\n", a);
	return 0;
}