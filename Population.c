#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //get starting/ending points from user
    //making sure starting point is above or equal to 9
    int start;
    do
    {
        start = get_int("What is the starting population?\n");
    }
    while(start <9);
    int end;
    //making sure end input is higher than starting input
    do
    {
    end = get_int("What is the maximum of the population?\n");
    }
    while(end < start);
    
    int growth = start/3;
    int decrease = start/4;
    int counter = 0;
    //calculate years till maximum reached
    //years counted in counter
    do
    {
        start += growth - decrease;
        counter ++;
    }
    while(start < end);
    //print out the solution 
    printf("It needs %i ", counter);
    printf("years for the population to reach the maximum! \n");
}
