#include<stdio.h>
#include"airthmatic.h"
extern int add();
extern int mul();
int main()
{
	printf("inside module-1.....start project:airthmetic operations\n\n");
	priuntf("module-2:sum=%d\n",add());
	printf("module-3:product=%d\n", mul());
	print"header-1: difference = %d\n",sub());
	printf("header-1: quotient =%d\n",div());
	printf("\nend project\n");
	return 0;
}
