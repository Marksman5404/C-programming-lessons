#include <stdio.h>

/*FUNCTIONS*/

    /* A function is a small section of code, that is executed, whenever we call it.
    it is also known as involking of functions, this helps prevent repeatition of codes
    should we need to use a code more than once.
    It is not considered a good practice to repeat a code more than once*/
void Jonny()
{
printf("\nJonny, Jonny, yes mama");
printf("\nEating sugar, no  mama");
printf("\nTelling lies, no mama");
printf("\nOpen your mouth, hahaha!\n");
}

int main(void)
{

Jonny();
Jonny();
Jonny();


return(0);
}

