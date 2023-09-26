#include<stdio.h>
int main()
{
    float a, b;
    printf("Enter the first number : ");
    scanf("%f",&a);
    printf("Enter the second number : ");
    scanf("%f", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of a is %f and b is %f after swapping ", a, b);
    return 0;
}
