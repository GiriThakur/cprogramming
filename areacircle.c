#include <stdio.h>
int main()
{
float radius,area,peri;
const float pi = 3.14;
printf("Enter the radius of circle: ");
scanf("%f",&radius);
area = pi * radius * radius;
peri = 2 * pi *radius;
printf("\n Area of circle: %f",area);
printf("\n Perimeter of circle: %f",peri);
}
