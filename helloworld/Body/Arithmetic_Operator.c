#include <stdio.h>

int main(void)
{
/* Arithmetic operators*/

// + (addition)
// - (subtraction)
// * (multiplication)
// / (division)
// % (modulus)
// ++ (increment)
// -- (decrement)

int x = 5;
int y = 2;
/* Addition, subtration, multiplication are same way applied*/
int z = (x + y);

/* but for division '/', (5 / 2 is mot equal 2.5 but 2) since we are wonking with int
    to make this happe we must operate using a float as the diviser and as the result i.e below*/

/*float k = (x / y);

        /* OR retain the divisor as int and rather change the divisor in result to float
            as seen below*/
float k = (x / (float) y);

/* Modulus '%' it gives the remainder of any divsion*/
int h = x % y;

/* increment and decrement. we can increment or decrement a number by 1 as seen below*/
x++;

printf("x++ is %d\n", x);
printf("modulus of x and y is %.1d\n", h);
printf("division of x and y is %.1f\n", k);
printf("Addition of x and y is %d", z);


return (0);

}