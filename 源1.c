#include<stdio.h>
int main()
{
	double b = 3.14;
	double* pb = &b;
	printf("%d\n",sizeof(pb));
	return 0;
}