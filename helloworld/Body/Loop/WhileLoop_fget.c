#include <stdio.h>
#include <string.h>

// While loop will repeat a section of code possibly unlimited times.
// continue executing code, while some condition remains true.
// A while loop might not execute at all.


/* Write a code that ask for a users name indefinitely until they input a code*/
int main(void)
{
char name[23];
printf("What is your name?\n");
fgets(name, 25, stdin);
name[strlen(name) - 1] = '\0';

while(strlen(name) == 0)

{
printf("you did not enter a name\n");
printf("What is your name?\n");
fgets(name, 25, stdin);
name[strlen(name) - 1] = '\0';

}

printf("Hi %s you are doing well", name);


}