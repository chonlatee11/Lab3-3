#include <stdio.h>
//#include <math.h>
int main(void) {
  float a, b;
  printf("Enter A : ");
  scanf("%f", &a);
  printf("Enter B : ");
  scanf("%f", &b);
  printf("%.2f * %.2f = %.2f", a, b, a*b);
  return 0;
}