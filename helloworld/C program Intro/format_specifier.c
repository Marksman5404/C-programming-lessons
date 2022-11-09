#include <stdio.h>

int main(void)
{
/* Format specifier % : defines and formats a type of data to be displayed*/
/* %.1 = decimal precision*/
/* %1  = minimum field width*/
/* %-  = left align*/
float item1 = 5.75;
float item2 = 10.00;
float item3 = 100.99;

/*printf with newline*/
printf("1. Item 1 : %f\n", item1);
printf("2. Item 2 : %f\n", item2);
printf("3. Item 3 : %f\n", item3);

/* printf with dollar sign, newline and decimal precision*/

printf("4. Item 1 : $%.2f\n", item1);
printf("5. Item 2 : $%.2f\n", item2);
printf("6. Item 3 : $%.2f\n", item3);

/* printf with dollar sign, newline and decimal precision and minimum field width*/
printf("7. Item 1 : $%8.2f\n", item1);
printf("8. Item 2 : $%9.2f\n", item2);
printf("9. Item 3 : $%10.2f\n", item3);

/* printf with dollar sign, newline and decimal precision and minimum field width
 and also left align*/
printf("7. Item 1 : $%-8.2f\n", item1);
printf("8. Item 2 : $%-9.2f\n", item2);
printf("9. Item 3 : $%-10.2f\n", item3);


return (0);

}