#include <stdio.h>

/*for loop : A for loop repeat a section of code in a limited amount of time*/
/*statement to add to our for loop:*/
/*1. some sort of counter or index, i.e  (int index = 1;), index can be shorten to
/*2. A  condition: How long should we continue to repeat this code i.e 
        continue as long as (i <= 10;)*/
/*3. increament or decreament i.e (i++) or (i--)*/
int main(void)
{

for(int i = 1; i <= 10; i++)    //count from 1 to 10, or write a string 10 times
//for(int i = 1; i <= 10; i+=2)    //I increament by 2
//for(int i = 10; i >= 1; i--)    //I decrement by 1
//for(int i = 10; i >= 1; i-=2)   // I decreament by 2

{
printf("%d\n", i);
//printf("Daniel\n");
}

    return (0);
}