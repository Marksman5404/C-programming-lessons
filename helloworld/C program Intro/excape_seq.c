#include <stdio.h>

int main(void)
{
    /* escape sequence = character combination of a backlash \ followed by
    a letter or combination of digits.
    They specify actions within a line or string of text*/
    /* i.e \n (newline), \t(tab), \"\" (for quotes)*/
    printf("I\nam\nMarksman\n");
    printf("5\t4\t0\t4\t\n2\t4\t6\t8\t\n");
    printf("\" I am Marksman\" - Abraham Lincoln\n");
    printf("\\marksman5404\\\n");
    printf("\'Marksman\'\n");

    return (0);
}