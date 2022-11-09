#include <stdio.h>

int main(void)
{
    /* Augmented assignment operators: Used to replace a statement where an operator takes
       a variable as one of its arguments and then assigns the result back to the same
       variable*/

       int x = 10;

       /*we could increment x by writting as below*/
       //x = x + 2;

       /* A better short way would be; */
       x+=2;

       printf("%d", x);
       
    return 0;
}
