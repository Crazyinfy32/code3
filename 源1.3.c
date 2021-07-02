#include<stdio.h>
int main()
{
	int age = 0;
	scanf_s("%d", &age);
	//int age = 20;
	if (age < 18)
		printf("未成年");
	else if (age > 60)
		printf("退休了");
	else
		printf("正当壮年");
	return 0;

}