#include <stdio.h>
#include <stdbool.h>
/*LOGICAL OPERATORS*/

int main(void)
{

/* Logical Operator; ! (NOT) reverses the state of a condition.*/

bool sunny= true;

if(!sunny)
{
    printf("It's not sunny Outside");

}
   
else
{
 printf("It's sunny Outside");
}

return(0);
}

