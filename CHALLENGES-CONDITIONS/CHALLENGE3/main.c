#include <stdio.h>
#include <stdlib.h>

int main()
{
    float X,Y,T;
    printf("donner X=");
    scanf("%f",&X);
    printf("donner Y=");
    scanf("%f",&Y);
    if(X!=Y || X<Y){
            T=X;
            X=Y;
            Y=T;
        printf("X=%.2f,Y=%.2f",X,Y);
        }
        else
            printf("X=Y");
    return 0;
}
