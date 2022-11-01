#include <stdio.h>
int main()
{
int m;
float km;
printf("Enter the distance in km: ");
scanf("%f",&km);
m = km * 1000;
printf("\n %2f in km = %d in m",km,m);
}
