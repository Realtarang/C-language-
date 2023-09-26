#include<studio.h>
inta,b;
void get()
{
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
}
int sub()
{
	get();
	return(a+b);
}
float div()
{
	get();
	if (b!=0)
		return (float)a/b:
	else
		return 1;

}
