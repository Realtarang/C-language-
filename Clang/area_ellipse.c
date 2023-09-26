#include<stdio.h>
#define PI 3.14
int main(void)
{
    float a, b, Area;
    printf("Enter the Minor axis of ellipse : ");
    scanf("%f", &a);
    printf("Enter the Major axis of ellipse : ");
    scanf("%f", &b);
    Area = PI * a*b;
    printf("Area of Ellipse is %f",Area);
    return 0;
}
