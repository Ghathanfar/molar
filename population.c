#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    int start;
    do
    {
        start = get_int("start size: ");
    }
    while(start<9);
    
    int end;
    do
    {
        end = get_int("end size: ");
    }
        while(end < start);
        //calculate
        int year_passed = 0;
        int current_population = start;
        while(current_population<end)
    {
        current_population = round(current_population + (current_population/3)-(current_population/4));
        year_passed++;
    }
    //print output
    printf("years %i\n",year_passed);
    
    
}
