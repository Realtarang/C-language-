#include<stdio.h>
#define PI 3.14
int main(void)
{
    float Radius, Area;
    printf("Enter the Radius of Sphere: ");
    scanf("%f", &Radius);
    Area = 4 * PI * Radius * Radius;
    printf("Area of Sphere is %f",Area);
    return 0;
}
