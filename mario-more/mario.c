#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int size;

    do
    {
        size = get_int("Height: ");
    }
    while(size < 1 || size > 8);

    printf("Height: %i\n", size);

    for (char = i; i < size; i++) {

        for (int = j; j < size; j++)
        {
            printf("#");
        }

        printf("./n");
    }
}