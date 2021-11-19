#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,B,C,S,M;
    printf("entrer la valeur de A=");
    scanf("%f",&A);
    printf("entrer la valeur de B=");
    scanf("%f",&B);
    printf("entre la valeur de C=");
    scanf("%f",&C);
    S=A+B+C;
    M=S/3;
    printf("la somme S=%.2f,la moyenne M=%.2f",S,M);

    return 0;
}
