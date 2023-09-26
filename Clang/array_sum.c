#include<stdio.h>

int main()
{
	int size;
	printf("enetr the size of array: ");
	scanf("%d",&size);
	
	int array[size];
	int index;
	
	printf("enetr the %d elements: ",size);
	for(index = 0; index<size; index++)
	{
		scanf("%d",&array[index]);
	}
	
	int sum=0;
	
	for(index = 0; index<size; index++)
	
	{
		sum = sum + array[index];
	}
	
	printf("%d", sum);
	
	return 0;
}
