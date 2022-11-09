#include <stdio.h>

//|Function Protoype
/* A function prototype is a funtion declaration without a body, before we declare the main
function. |Ensure that calls to functions are made with the correct number and type
of arguments. A function prototype causes the compiller to flag an error if argument
are missing, instead of running the code, therby leading to unexpected behaviour due
to missing arguments. */
void hello(char[], int); //function prototype

int main(void)

{
char name[] = "Marksman";
int age = 21;

hello(name, age);

    return (0);
}
void hello(char name[], int age)
{
    printf("My name is %s i am %d years old", name, age);
}