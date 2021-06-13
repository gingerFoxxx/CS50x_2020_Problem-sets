#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars;
    int cents;
    int coins = 0;


    do
    {
        dollars = get_float("Input change \n");
    }
    while (dollars <= 0);
    cents = round(dollars * 100); // Округляем доллары в центы
    printf("Change owed: %i\n", cents);

    while (cents - 25 >= 0)
    {
        coins++;
        cents = cents - 25;
    }
    while (cents - 10 >= 0)
    {
        coins++;
        cents = cents - 10;
    }
    while (cents - 5 >= 0)
    {
        coins++;
        cents = cents - 5;
    }
    while (cents - 1 >= 0)
    {
        coins++;
        cents = cents - 1;
    }


    printf("%i\n", coins);
}