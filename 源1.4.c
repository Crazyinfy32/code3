#include<stdio.h>
int main()
{
	int age = 0;
	scanf_s("%d", &age);
	//int age = 20;
	if (age < 18)
		printf("δ����");
	else if (age > 18 && age < 60)
		printf("����׳��");
		/*printf("������");
	else
		printf("����׳��");*/
	return 0;

}