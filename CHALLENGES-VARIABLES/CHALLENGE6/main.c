#include <stdio.h>
#include <stdlib.h>
#define A 32
#define B 1.8
int main()
{
       float F, C;

   printf("donner la temperature en Celsius T=");
   scanf("%f",&F);
   F=C*B+A;
   printf("la temperature en Fahrenheit T= %.2f",F);
    return 0;
}
