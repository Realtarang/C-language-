#include<stdio.h>
int main()
{
	int a, *p;
	p = &a;
	printf("enter a number :");
	scanf("%d",&a);
	printf("the entered number is : %d\n",*p);
	printf("the entered number is : %d\n",a);
	return 0;
}
