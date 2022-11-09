#include <stdio.h>
#include <ctype.h>

int main(void)
{
char unit;
float temp;

printf("Enter temperature in (F) or (C)?: ");
scanf(" %c", &unit);

unit = toupper(unit);  
/*toupper; convert lower alphabeth inputted to upper Alphabeth*/

if (unit == 'F')
{
printf("Enter Temperature in faraheit:  ");
 scanf(" %f", &temp);
 temp = (temp - 32) * 5 / 9;
printf("the temperature in faraheit is: %.1f",temp);
}

else if (unit == 'C')
{
    printf("Enter the Temperature in celsuis: ");
    scanf("%f", &temp);
    temp = (temp * 9 /5) + 32;
    printf("the temperature in celsuis is: %.1f",temp);
}

else
{
    printf("Enter teperature in (C) or (S)");
}

    return (0);
}