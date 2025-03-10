#include <stdio.h>
int main()
{
  float r,area;
  printf("r:");
  scanf("%f",&r);
  if(r<=0){
    printf("Radius cant be zero or less");
    return 0;
  }
  area= 4*3.14*r*r;
  printf("Area of the sphere:%.2f\n",area);
  return 0;
}