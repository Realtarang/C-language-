#include<stdio.h>
#define pi 3.14


int main(void)
{
float rad, area;
printf("enter radius");
scanf("%f", &rad);
area = pi *rad*rad;
printf("the area of radius %f",rad,"is %f",area);
return 0;
}
