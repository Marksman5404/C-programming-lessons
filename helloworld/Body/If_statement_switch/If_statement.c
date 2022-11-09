#include <stdio.h>

int main(void)
{
 /*if statement is used to add choices to a program*/
 
 int age;

 printf("How old are you\n");
 scanf("%d", &age);

 if(age >= 18)
 {
 printf("you are eligible\n");
 }

else if(age == 17)
{
printf("you will be eligible next year");
}
else if (age <= 0)
{
    printf("grow up first, and come back");
}

 else   
 {
    printf("You are ineligible");
 }

return (0);

}