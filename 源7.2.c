#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
    Swap(&a, &b);
	printf("%d %d", a,b);
	return 0;
}