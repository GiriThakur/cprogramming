#include <stdio.h>
int main() {
    float side, area,peri;
    printf("Enter the value of side: ");
    scanf("%f",&side);
    area = side * side;
    peri = 4 * side;
    printf("\n Perimeter of square : %f",peri);
    printf("\n Area of square : %f", area);


}