#include <stdio.h>
#include <math.h> 

int main(void)
{
/* hypotenuse of a right angled triangle*/

double a;
double b;
double c;


printf("Enter side a for the triangle\n");
scanf("%lf", &a);


printf("Enter side b for the triangle\n");
scanf("%lf", &b);



c = sqrt((a * a) + (b * b));


printf("side c of the triangle is %.0lf", c);

 return (0);
}