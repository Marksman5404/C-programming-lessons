#include <stdio.h>

/*We */
double square(double x)
{
/*  to return a value back to a calling function, we would use the return keyword
followed by the value or variable we would like to return in this case its 'x'. 
i.e 'return x* x". We also need to list the datatype of what we are returning,
withiin the function declaration which is double in the case i.e 
double square(double x).  */
return x * x;
}

int main(void)
{
/* The return statement, returns a value back to a calling function*/
/*example; function square will accept argument in double, square the double,
and return the result back to the calling function.*/
double x = square(3.14);
printf("%lf", x);
    return (0);
}
