#include <stdio.h>
#include <stdbool.h>

int main(void)
{
char a = 'C';           /* can store single character    %c*/
char b[] = "Bro";       /* store array of characters      %s*/
char f = 100;         /* (uses 1 byte memory) we can store integers btw -128 to 127, 
                        we can display this stored number as %d or %c
                        if we want to display 100 as a character, we would use the ASCI
                        table to convert this number to a character representation.
                        if we use %d it will display 100, but if we use %c it displays the
                        corresponding ASCII character*/  
unsigned char g = 125;  /* when we declare the variable unsigned, it disregard any
                        any negative numbers. unsigned range btw (0 to 255) uses %d or %c
                        if we go beyond 255 it will print that whatever number it is, as o*/


float c = 3.14159256333478990;     /* store decimal number,          %f
                        can display more digit by adding 0.(amount of disired digit
                        i.e printf("%0.15f\n") display 15 more digit but with non accurate
                        number compare to a float. )*/
/* Float: uses (4 bytes of memory) with (32 bits of precision), store 6 - 7 digits
    Doubles: 8 bytes (64 bits of precision), 15 - 16 digits*/
double d = 3.14159256333478990;  /* have double the precision of a float, 
                        can store more significant digit   %lf */

int j = 2147483647;     /* 4 bytes, stores whole numbers btw (-2,147,483,548 to 2,147,483,647) %d */
unsigned int k = 4294967295;    /* 4 bytes (0 to 4,294,967,295) %u*/

short int h = 32767;    /* 2 bytes (-32,768 to 32,767)  %d*/
unsigned short int i = 65535;   /* 2 bytes (0 to 65,535) %d format specifier*/

long long int I = 9223372036854775807;   /* 8 bytes (-9 quintillion to 9 quintillion) %lld*/
unsigned long long int m = 18446744073709551615U;    /* 8 bytes (0 to 18 quintillion) %llu
                                                    add a U after the number so it can be displayed 
                                                    without a warning i.e 18446744073709551615U;*/

bool e = true;
bool z = false;    /*to work with booleans in c we #include <stdbool.h>
                    booleans stores true or false they work in binary, 1 rep true,
                    0 rep false. %d displays booleans*/



/* */

printf("%0.15f\n", c);
printf("%0.15lf\n", d);
printf("%d\n", e);
printf("%d\n", z);
printf("char with \"percent d\" is %d\n", f);
printf("char with \"percent c\" is %c\n", f);
printf("unsigned char is %d\n", g);
printf("unsigned char using percent c is %c\n", g);
printf("signed integer using percent d is %d\n", j);
printf("unsigned integer using percent u is %u\n", k);
printf("long long integer using percent lld is %lld\n", I);
printf("unsigned integer using percent llu is %llu\n", m);


return (0);
}