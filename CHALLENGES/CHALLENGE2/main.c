#include <stdio.h>
#include <stdlib.h>
#define A 32
#define B 1.8
int main()
{
   float F, C;

   printf("donner la temperature en F=");
   scanf("%f",&F);
   C=(F-A)/B;
   printf("la temperature en C= %f.2",C);

    return 0;
}
