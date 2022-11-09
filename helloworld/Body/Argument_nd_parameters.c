#include <stdio.h>

/*Functions can't see inside of other functions, so its important to pass our 
variables as argument when we invoke other functions*/

void birthday(char name[], int age)
/* after adding our arguments as below,
we can now list our variables between the function parentesis, preceeded by the 
character type as above.*/
{
    printf("\nHappy birthday dear %s!", name);
    printf("\nyou are %d years old!", age);
}

int main()
{
    char name[] = "Marksman";
    int age = 21;
/* in order for function birthday to be aware the name and age variables, we had to pass,
the variables as argments by adding our variables, between the parentensis*/
    
    birthday(name, age);
/*Anything passed to a function are known as arguments*/
    return(0);
}