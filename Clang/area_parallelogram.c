#include<stdio.h>
int main(void)
{
    float Base, Height, Area;

    printf("Enter the Base of Parallelogram: ");
    scanf("%f", &Base);

    printf("Enter the Height of Parallelogram: ");
    scanf("%f",&Height);

    Area = Base * Height;

    printf("Area of parallelogram is %f",Area);
    return 0;
}
