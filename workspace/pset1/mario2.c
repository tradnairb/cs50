#include <stdio.h>
#include <cs50.h>
#include <string.h>

void drawPyramid(int height);
int getSpaces(int height, int row);
int getHashes(int row);

int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        height = get_int();
    }
    while (height < 0 || height > 23);        
    drawPyramid(height);
}

void drawPyramid(int height)
{
    for(int r = 0; r < height; r++)
    {        
        for(int s = getSpaces(height, r); s > 0; s--)
        {
            printf(" ");
        }
        for(int h = getHashes(r); h > 0; h--)
        {
            printf("#");
        }
        printf ("  ");
        for(int h = getHashes(r); h > 0; h--)
        {
            printf("#");
        }
        printf("\n");
    }
}

int getSpaces(int height, int row) 
{
    return ((height - row) - 1);
}

int getHashes(int row) 
{
    return 1 + row;
}