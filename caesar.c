#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
       printf("Usage: ./caesar key\n"); // input key
       return 1;
    }
    int k = atoi(argv[1]); // only posetive digits
    if (k < 0)
    {
       printf("key can't be negative\n");
       return 1;
    }

   //shifting:
   string plaintext = get_string("Input plaintext: ");
   printf("ciphertext: ");
   for (int i = 0, len = strlen(plaintext); i < len; i++)
   {
       if (islower(plaintext[i]))
       {
            printf("%c", (plaintext[i] - 'a' + k) % 26 + 'a');
       }
       else if (isupper(plaintext[i]))
       {
            printf("%c", (plaintext[i] - 'A' + k) % 26 + 'A');
       }
       else
       {
            printf("%c", plaintext[i]);

       }
   }
   printf("\n");




}