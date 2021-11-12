#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,Y,S;
    printf("X=");
    scanf("%d",&X);
    printf("Y=");
    scanf("%d",&Y);
    S=X+Y;
    if(X==Y){
        S=3*S;
        printf("la somme S=%d",S);
    }
    else{
        S=S;
    printf("la somme S=%d",S);}
    return 0;
}
