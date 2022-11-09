#include <stdio.h>
#include <math.h> /*contain maths functions*/
int main(void)
{
    double A = sqrt (9);
    double B = pow  (2, 4); // we raise 2 to the power of 4. first number is d base num.
    int C    = round (3.14);
    int D    = ceil (3.14); // round up number to the next higher whole number
    int E    = floor (3.99); // round down number to the nearest lower whole number 
    double F    = fabs   (-100);       // absolute value of a number, how far a number is from 0.
    double G    = log  (3);     //logarithm of a number
    double H    = sin (45);
    double I    = cos (45);
    double J    = tan  (45);

    printf("%lf\n", A);
    printf("%lf\n", B);
    printf("%d\n", C);
    printf("%d\n", D);
    printf("%d\n", E);
    printf("%lf\n", F);
    printf("%lf\n", G);
    printf("%lf\n", H);
    printf("%lf\n", I);
    printf("%lf\n", J);


    return 0;
}
