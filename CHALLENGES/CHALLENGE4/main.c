#include <stdio.h>
#include <stdlib.h>
#define cst 1.609
int main()
{
    float KM,m,Miles;
    printf("donner la distance en Miles d=");
    scanf("%f",&Miles);
    KM=Miles*cst;
    m=KM*1000;
    printf("la distance en m d=%.2f",m);

    return 0;
}
