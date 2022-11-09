#include <stdio.h>

int main(void)
{
/* Constant = is a fixed value that cannot be altered by the program during its
                execution. */
/* To prevent a variable or a value from being changed, we can turn that variable
                into a constant,by precedding the data type with the keyword; const*/

const float PI = 3.14159; /* common naming convention with constant is to make all the 
                            letters upper case. */
PI = 420.69;

printf("%f", PI);

    return (0);
}