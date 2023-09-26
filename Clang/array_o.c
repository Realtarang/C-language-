#include<stdio.h>

int main()
{
	int size;
	printf("enetr the size of array: ");
	scanf("%d",&size);
	
	int array[size];
	
	printf("enetr the %d elements: ",size);
	for(int index = 0; index<size; index++)
	{
		scanf("%d",&array[index]);
	}
	
	printf("element in array: ");
	for(int index=0; index<size; index++)
	{
		printf("%d\t", array[index]);
	}
	
	return 0;
}
