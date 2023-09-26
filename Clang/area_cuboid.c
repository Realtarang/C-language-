#include<stdio.h>
int main(void)
{
    float Length, Breadth, Height, Area;
    printf("Enter the Length of Cuboid: ");
    scanf("%f", &Length);
    printf("Enter the Breadth of Cuboid: ");
    scanf("%f",&Breadth);
    printf("Enter the Height of Cuboid: ");
    scanf("%f", &Height);
    Area = 2*(Length * Breadth + Breadth * Height + Length * Height);
    printf("Area of Cuboid is %f",Area);
    return 0;
}
