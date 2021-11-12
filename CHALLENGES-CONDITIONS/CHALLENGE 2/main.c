#include <stdio.h>
#include <stdlib.h>

int main()
{
       int nbr,X;

   printf("Entrez un entier:\n");
   scanf("%d", &nbr);
   X= nbr%2;

   if ( X == 0)
      printf("Paire\n");
   else
      printf("Impaire\n");

    return 0;
}
