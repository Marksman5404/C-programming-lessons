#include <stdio.h>
#include <stdbool.h>
/*LOGICAL OPERATORS*/

int main(void)
{

/* Logical Operators; (OR) '||*checks if at least one condition is true*/

float temp = 39;
bool sunny= false;

if((temp >= 0) || (temp <=37 ) || (sunny == true))
{
    printf("temp is in range");

} 
   
else
{
 printf("temp is not in range");
}

return(0);
}

