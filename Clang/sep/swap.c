#include<stdio.h>
int main()
{
	int a, b;
	printf("enter two numbers :");
	scanf("%d%d", &a,&b);
	printf("give numbers: %d, %d\n" ,a,b);
	swap(a,b);
	printf("after returnuing from function ");
		
}

void swap(int a, int b)
{
	printf("the number ")
	int temp;
	temp = a;
	a = b;
	b= temp;
	
}
