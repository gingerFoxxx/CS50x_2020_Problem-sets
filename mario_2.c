#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, spaces, left_hashes, gap, right_hashes;

    do
    {
        height = get_int("Height: \n");
    }
    while (height < 1 || height > 8);
    for (int i = 1; i <= height; i++) 
        // Минимальная высота = 1, Пока i <= height (1..8), Прибавляем значение +1.
    {
        for (spaces = (height - i); spaces > 0; spaces--) // Пробелы слева
        {
            printf(" ");
        }
        for (left_hashes = 2; left_hashes <= (i + 1); left_hashes++) //Левые хэши
        {
            printf("#");
        }
        for (gap = -1; gap <= spaces ; gap++) // Промежутки
        {
            printf(" ");
        }
        for (right_hashes = 2; right_hashes <= (i + 1); right_hashes++) //Правые хэши
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}


