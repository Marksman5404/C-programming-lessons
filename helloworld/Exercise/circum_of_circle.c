#include <stdio.h>
#include <math.h> 

int main(void)
{
/* Calculate the circumference of a circle*/
const double PI = 3.14159;
double radius;
double circumference;
double area;
double sqr;

printf("Enter the radius of the circle\n");
scanf("%lf", &radius);

circumference = 2 * PI * radius;
area = PI * (radius * radius);

printf("the area of the circle is %lf\n", area);
printf("the circumference of the circle is %lf", circumference);

 return (0);
}