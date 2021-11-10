#include <stdio.h>
#include <stdlib.h>
#define cst 1.609
int main()
{
    float m ,Km ,Miles;
    printf("donner la distance en metre d=");
    scanf("%f",&m);
    Km=m/1000;
    Miles=(Km*cst);
    printf("la distance en Miles d=%.2f",Miles);

    return 0;
}
