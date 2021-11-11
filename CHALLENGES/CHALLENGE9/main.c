#include <stdio.h>
#include <stdlib.h>

int main()
{
    float MN,x1,y1,x2,y2;
    printf("donner x1(m)=");
    scanf("%f",&x1);
    printf("donner y1(m)=");
    scanf("%f",&y1);
    printf("donner x2(m)=");
    scanf("%f",&x2);
    printf("donner y2(m)=");
    scanf("%f",&y2);
    //M=(x1,y1);
    //N=(x2,y2);
    MN=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("la distance MN(m)=%.2f",MN);

    return 0;
}
