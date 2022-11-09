#include <stdio.h>

int main(void)
{
/* Variable : are allocated space in memory to store a value.
we refer to a variable's name to acces the stored value.
That variable now behave as if it was the value it contains.
But we need to declare what type of data we are storing. */

/* creating a variable involve two steps
declaration and initialization*/

int x; /* declaration*/
x = 123; /* initialization*/
int y = 321; /* declaration + initialization*/

int age = 23; /*integer*/
float gpa = 2.05; /* floating point number*/
char grade = 'C'; /* single character*/
char name[] = "Bro"; /* array of characters*/

printf("I am %d years old\n", age);
printf("your grade is %0.2f\n", gpa);
printf("i mean you scored a %c\n", grade);
printf("i hope your %s will be proud\n", name);



return (0);

}