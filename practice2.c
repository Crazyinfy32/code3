#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_cmp(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a,&b);
	int y = my_cmp(a, b);
	printf("%d", y);
	return 0;
}