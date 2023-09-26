#include<stdio.h>
void add();				//no return type, no argument
int sub();				//int return type, no arguments
int mu;(int a, int b);			//int return type, 2 int arguments
int main()
{
	add();
	int result = sub();
	printf(""""
}

void add()
{
	int a,b;
	printf("enter 2 numbers: ");
	scanf("%d%d", &a, &b);
	printf("the sum is %d" , a+b);
}

int sub()
{
	int a,b;
	printf("enter 2 numbers: ");
	scanf("%d%d", &a, &b);
	printf("the sub is %d" , a-b);
}
