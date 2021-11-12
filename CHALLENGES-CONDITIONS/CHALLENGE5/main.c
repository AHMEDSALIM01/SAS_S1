#include <stdio.h>
#include <stdlib.h>


int main()
{
    float a,b,c,D;
    debut:
    printf("la valeur de a=");
    scanf("%f",&a);
    printf("la valeur de b=");
    scanf("%f",&b);
    printf("la valeur de c=");
    scanf("%f",&c);
    D=pow(b,2)-4*a*c;
    if(a == 0 && b == 0 && c == 0){
        printf("tous les nombres appartient de IR sont des solutions de l'equation S={IR}\n");
    }
    else if (a == 0 && b == 0){
            printf("l'equation n'a pas une solution sur IR S={EV}\n");

    }
    else if (a == 0){
        printf("l'equation accepte une seul solution sur IR x={%.1f/%.1f}\n",c,b);
    }
    else if (D == 0){
        printf("l'equation accepte une seul solution sur IR x={-%.1f/2%.1f}\n",b,a);
    }
    else if (D < 0){
        printf("l'equation n'a pas une solution sur IR S={EV}\n");
    }
    else {
        printf("l'equation accepte deux solution sur IR x1=(-%.1f+sqrt(%.1f))/2%.1f\t x2=(-%.1f-sqrt(%.1f))/2%.1f\n",b,D,a,b,D,a);
        printf("l'ensemble de solution S={-%.1f+sqrt(%.1f))/2%.1f , -%.1f-sqrt(%.1f))/2%.1f\n",b,D,a,b,D,a);
    }
    goto debut;
    return 0;
}
