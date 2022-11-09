#include <stdio.h>
#include <string.h>     // help us access string function already written for us
int main(void)
{
char string1 [] = "Marksman";
char string2 [] = "codes";


//strlwr(string1);    //convert string to lower case
//strupr(string1);    //convert string to upper caase
//strcat(string1, string2);       //Appends string2 to end of string1
//strncat(string1, string2, 1);   //appends n character from string2 to string1
//strcpy(string1, string2);       //copy string2 to string1
//strncpy(string1, string2, 5);   //copy n character of string2 to string1
//strset(string1, 'X');   //sets all character of a string to given character
//strnset(string1, 'x', 5);    //sets first n characters of a string to a given character
//strrev(string1);    //Will reverse a string

//string integers : This set of functions will return an integer
//int result = strlen(string1);   //returns string lenght as integer
//int result = strcmp(string1, string2);    //string compare n character
//int result = strnicmp(string1, string1, 1); //string compare n character (ignoring case)
//int result = strcmpi(string1, string1);    //string compare all (ignoring case)

/*if (result == 0)
{
    printf("both strings are the same");
}
else 
printf("they are not the same"); 

printf("%d", result); */
printf("%s", string1);

    return (0);
}
