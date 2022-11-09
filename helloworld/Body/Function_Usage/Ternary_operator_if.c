#include <stdio.h>
/* Ternary Operator also known as condition operator is shortcut to using an
if else , when assigning/returning a value*/

/*formula: write a condition followed by (question mark) ?, if the conditio is true,
we return some value or if the condition is false we return some other value. */

/* create a function that finds the maximum of two integers, first we'll use if
else statements, then we switch to ternary operator.*/

/* if else */
int GiveMax(int x, int y)
{
/*if (x > y)
{
    return x;
}
else 
{
    return y;
} 

/*ternary Operator,
is (x > y)?, then the value we returning if true 'x' or ':' our value if condition
is false which is 'y'. And we no longer need the if else statement, tis a shortcut*/
return (x > y) ? x : y;

}


int main()
{
int max = GiveMax (10, 4);

printf("max is %d", max);
    return (0);
}