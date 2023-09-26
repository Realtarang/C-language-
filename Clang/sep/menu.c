#include<stdio.h>
#include<stdlib.h>
void add();
void sub();
void mul();

int main(void)
{
	int call;
	while(1)
	{
		printf(" 1: Addition\n 2: Subtraction\n 3: Multiplication\n Any other number\n ");
		printf("which function you want to call ; ");
		scanf("%d",&call);
	
		switch(call)
		{
			case 1:
			add();
			break;
			case 2:
			sub();
			break;
			case 3:
			mul();
			break;
			default:
			printf("choose another time :)");
			exit(0);
		}
	}
	return 0;
}

void add()
{
	int a,b;
	printf("enter the first for addition : ");
	scanf("%d", &a);
	printf("enter the second for addition : ");
	scanf("%d", &b);
	printf("the sum is %d\n\n",a+b);
}

void sub()
{
	int a,b;
	printf("enter the first for Subtraction : ");
	scanf("%d", &a);
	printf("enter the second for Subtraction : ");
	scanf("%d", &b);
	printf("the subtraction is %d\n\n",a-b);
}

void mul()
{
	int a,b;
	printf("enter the first for Multiplication : ");
	scanf("%d", &a);
	printf("enter the second for Multiplication : ");
	scanf("%d", &b);
	printf("the multiplication is %d\n\n",a+b);
}
