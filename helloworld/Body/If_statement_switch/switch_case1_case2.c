#include <stdio.h>
#include <ctype.h>

int main(void)
{
/*Switch : is a more efficient alternative to using many "else if" statements
it allows a value to be tested for equality against many cases*/

char grade;

printf("Enter a letter grade: ");
scanf("%c", &grade);

grade = toupper (grade);

switch (grade)
{
    case 'A':
        printf("Excellent grade\n");
        break;
    case 'B':
        printf("Very Good grade\n");
        break;
    case 'C':
        printf("Good grade\n");
        break;
    case 'D':
        printf("Fair grade\n");
        break;
    case 'E':
        printf("Poor grade\n");
        break;
    case 'F':
        printf("Very Poor grade\n");
        break;
    default:
        printf("please enter only valid grades");

}

    return (0);
    }