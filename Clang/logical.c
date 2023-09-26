#include<stdio.h>
#include<stdbool.h>

int a,b;
void get()
{
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
}
int AND()
{
	get();
	return(a&&b);
}
bool OR()
{
	get();
	return(a||b);
}
