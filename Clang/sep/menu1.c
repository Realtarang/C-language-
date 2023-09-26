#include<stdio.h>
#include<stdlib.h>
int add();
void sub(int,int);
void mul(int*,int*);
float* div(int,int);

int main(void)
{
	int call;
	while(1)
	{
		printf(" 1: int add();\n 2: void sub(int,int);\n 3: void mul(int*,int*);\n 4: float* div(int,int);\n Any other number\n ");
		printf("which function you want to call ; ");
		scanf("%d",&call);
	
		switch(call)
		{
			case 1:
			int add();
			break;
			case 2:
			int a,b;
			printf("write the two values : ");
			scanf("%d %d",&a,&b);
			void sub(a,b);
			break;
			case 3:
			int *a, *b;
			printf("enter the two values : ");
			scanf("%d %d", &a, &b);
			void mul(*a, *b);
			break;
			case 4:
			float* a,b;
			printf("write the two values : ");
			scanf("%d %d",&a,&b);
			float* div(a,b);
			break;
			default:
			printf("choose another time :)");
			exit(0);
		}
	}
	return 0;
}

int add()
{
	int a,b;
	printf("write the two values : ");
	scanf("%d %d",&a,&b);
	printf("the addition is : %d", a+b);
}

void sub(int c,int d)
{
	printf("the subtraction is : %d", c-d);
}

void mul(int *c,int *d)
{
	printf("the multiplication is : %d", c * d);
}
float* div(int c, int d)
{
	printf("the division is : %d", c/d);
}
