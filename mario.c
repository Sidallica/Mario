#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    //Prompt user input
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    //Outer loop changes row
    for (int temp = 0; temp < height; temp++)
    {
        //Inner loops to print out individual rows

        //Prints initial spaces
        for (int i = temp; i < height - 1; i++)
        {
            printf(" ");
        }

        //Prints initial #
        for (int i = 0; i <= temp; i++)
        {
            printf("#");
        }

        //Gives indent
        printf("  ");

        //Prints final #
        for (int i = 0; i <= temp; i++)
        {
            printf("#");
        }

        printf("\n");
    }
}