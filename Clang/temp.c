#include<stdio.h>
int main()
{
    float Celsius, Fahrenheit, Kelvin;
    printf("Enter the Temperature in celsius : ");
    scanf("%f",&Celsius);
    Fahrenheit = 1.8*Celsius + 32 ;
    Kelvin = Celsius + 273;
    printf("Temperature in fahrenheit is %f\n",Fahrenheit);
    printf("Temperature in Kelvin is %f\n",Kelvin);
    return 0;
}
