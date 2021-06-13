#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    int s; // spaces
    int d; // dashes

    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

   for (int i = 1; i <= h; i++)
   {
       
       for (s = (h - i); s > 0; s--) //  left-aligned
       {
           printf(" "); 
       }
        for (d = 2; d <= (i + 1); d++) //right-align
       {
           printf("#");
       }

       printf("\n");
   }
   return 0;
}



