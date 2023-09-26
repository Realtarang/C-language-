#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  float a, b, c;
  double discriminant, root1, root2;
  printf("Enter the coefficient of x^2: ");
  scanf("%f", &a);
  printf("Enter the coefficiant of x:");
  scanf("%f", &b);
  printf("Enter the value of constant:");
  scanf("%f", &c);

  discriminant = (b * b) - (4 * a * c);

  if (discriminant > 0)
  {
    root1 = (-b + sqrt(discriminant) / (2 * a));
    root2 = (-b - sqrt(discriminant) / (2 * a));
    printf("root 1= %f", root1);
    printf("root 2= %f", root2);
  } 
  else if (discriminant == 0) 
  {
    root1 = (-b / (2 * a));
    printf("root 1=%f", root1);
  } 
  else
  {
    printf("The root of this equation does not exist.");
  }
    return 0;
}
