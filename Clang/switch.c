#include<stdio.h>
int main(void)
{
	char alphabet;
	printf("enter the character : ");
	scanf("%d",&alphabet);
	
	switch(alphabet)
	{
		case'a':
		case'A':
		
		case'e':
		case'E':
		
		case'i':
		case'I':
		
		case'o':
		case'O':
		
		case'u':
		case'U':
		
		printf("vowel");
		break;
		
		default:
		printf("consonent");
	}
}	
