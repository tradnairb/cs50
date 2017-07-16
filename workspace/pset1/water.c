#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Minutes: ");
    int minutes = get_int();
    int ounces = minutes * 192;
    int bottles = ounces / 16;
    printf("Bottles: %i\n", bottles);
}