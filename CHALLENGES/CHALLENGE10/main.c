#include <stdio.h>
#include <stdlib.h>
#define Pi 3.14
int main()
{
    float P,r;
    printf("donner le rayon de cercle r=");
    scanf("%f",&r);
    P=(2*Pi*r);
    printf("le perimetre de cercle P=%.3f",P);

    return 0;
}
