#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x;
    char n='*';
    printf("donner le nombre de ligne de pyramid que vous voulez x= ");
    scanf("%d",&x);
    for(a=1;a<=x;a++){
        for(c=a;c<=x-1;c++){
            printf(" ");
        }

        printf("%c",n);

        for(b=1;b<a*2-1;b++){
            printf("%c",n);
             }

        printf("\n");


    }
    return 0;
}
