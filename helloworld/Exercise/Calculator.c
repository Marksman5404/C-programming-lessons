#include <stdio.h>

int main(void)
{

char operator;
double num1;
double num2;
double result;

printf("Enter an operator (+ - / *)\n");
scanf(" %c", &operator);

printf("Enter the first number:\n");
scanf(" %lf", &num1);

printf("Enter the second number:\n");
scanf(" %lf", &num2);

switch (operator)
{
case '+':
    result = num1 + num2;
    printf("the result is %lf:\n", result);
    break;
case '-':
    result = num1 - num2;
    printf("the result is %lf:\n", result);
    break;
case '/':
    result = num1 / num2;
    printf("the result is %lf:\n", result);
    break;
case '*':
    result = num1 * num2;
    printf("the result is %lf", result);
    break;
default:
    printf("%c input is not an operator", operator);

}

    return (0);
}