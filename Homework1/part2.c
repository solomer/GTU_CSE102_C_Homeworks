#include <stdio.h>
int main()
{
  float r,area;
  printf("r:");
  scanf("%f",&r);
  area= 4*3.14*r*r;
  printf("Area of the sphere:%.2f",area);
  return 0;
}