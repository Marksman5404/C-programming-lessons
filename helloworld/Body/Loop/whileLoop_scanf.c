#include <stdio.h>
#include <string.h>

int main(void)
{
char name[23];
printf("What is your name?\n");
scanf("%s", name);


while(strlen(name) == 0)

{
printf("you did not enter a name\n");
printf("What is your name?\n");
scanf("%s", name);


}

printf("Hi %s, how are you today", name);


}