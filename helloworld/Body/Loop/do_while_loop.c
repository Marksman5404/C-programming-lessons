#include <stdio.h>

            //Do while loop
    /*A do while loop is a variation of while loop,
  A while loop; checks the condition, then executes a block of code if condition is true,
  A while loop checks the condition first,

  A do While loop; always executes a block of code once, Then checks a condition
  at the end, if that condition is true we will continue the other loop.
  A do while loop checks the condition last, so therefore we will move our condition
  to the end of our code, after the last curly bracket, and add a semi column ';'
   we then add the word 'do' before the first curly bracket*/

/* example: User types in as many number as they want, as long as its above zero,
if its zero or less, then we will find the sum of all numbers above zero preiously entered.*/


int main (void)
{

int number = 0;
int sum = 0;

do
{
    printf("Enter a number above zero\n");
    scanf("%d", &number);

    if(number > 0)
    {
        //sum = sum + number;
        sum += number;
    }
    
}
   while(number > 0); 
    
    printf("the sum is %d", sum);

    return (0);
}