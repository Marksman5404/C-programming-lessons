#include <stdio.h>
#include <stdbool.h>
/*LOGICAL OPERATORS*/

int main(void)
{

/* Logical Operator; && checks if two conditions are true
using this logical operator (&&), both condition must be true in order
to execute the statement. if one condition is false, the statement is false.*/

float temp = 36;
bool sunny= true;

if((temp >= 0) && (temp <=37 ) && (sunny == true))
{
    printf("temp is in range");

}
   
else
{
 printf("temp is not in range");
}

return(0);
}

