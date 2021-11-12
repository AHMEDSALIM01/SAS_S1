#include <stdio.h>
#include <stdlib.h>

int main()
{

    float M;
    debut:
    printf("entrer votre moyenne generale M=");
    scanf("%f",&M);
    if(M < 10){
        printf("Exclu\n");
    }
    else if(M >= 10 && M < 12){
        printf("Admis, PASSABLE\n");
    }
    else if(M >= 12 && M < 14){
        printf("Admis, ASSEZ-BIEN\n");
    }
    else if(M >= 14 && M < 16){
        printf("Admis, BIEN\n");
    }
    else
        {
        printf("Admis, TRES-BIEN\n");

    }
    goto debut;
    return 0;
}
