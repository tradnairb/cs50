#include <stdio.h>
#include <cs50.h>

int ouncesPerMinutes(int minutes);
int bottlesPerOunces(int ounces);

int main(void)
{
    printf("Minutes: ");
    int minutes = get_int();
    int ounces = ouncesPerMinutes(minutes);
    int bottles = bottlesPerOunces(ounces);
    printf("Bottles: %i\n", bottles);
}

int ouncesPerMinutes(int minutes)
{
    return minutes * 192;
}

int bottlesPerOunces(int ounces)
{
    return ounces/16;
}