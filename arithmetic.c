#include <stdio.h>
int main()
{
int a,b,sum,sub,multi;
float div;
printf("enter two integer number: ");
scanf("%d %d",&a,&b);
sum = a+b;
sub = a-b;
multi = a*b;
div = a/b;
printf("\n Addition of %d & %d = %d", a,b,sum);
printf("\n subtraction  of %d & %d = %d", a,b,sub);
printf("\n Multiplication of %d & %d = %d", a,b,multi);
printf("\n Division of %d & %d = %f", a,b,div);
}
