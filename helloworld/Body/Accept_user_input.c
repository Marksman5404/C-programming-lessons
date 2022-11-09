#include <stdio.h>
#include <string.h>

int main(void)
{
char name [25]; /* that is, 25 bytes*/
int age;

printf("Input a name, (surname first):\n");
//scanf("%s", &name); 
                        /* using the scanf we would read up to a white space only,
                        you cant enter your name alogside surname 
                        i.e Dan Jones, you can only enter |Dan bcos it wont read
                        beyond a white space.*/
/* if your user input will include a whitespace, then use fget function*/
/* fgets function requires name of variable, input size, stdin (standard input)
no need for input address.*/
fgets(name, 25, stdin);
name[strlen(name) - 1] = '\0';

printf("Enter your Age, in numbers\n");
scanf("%d", &age);  /* amber sign '&' preceding the address 'age', is the address of the scanf operator*/



printf("your name is %s ", name);
printf("you are %d years old", age);

    return (0);
}
