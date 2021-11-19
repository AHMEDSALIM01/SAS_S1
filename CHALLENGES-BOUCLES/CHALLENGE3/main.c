#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int v=0;
    printf("entrer un nombre entier a= ");
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        int x=a%b;
        if(x==0){
        v++;

        }
    }
        if(v==2)
        {
            printf("%d est un nombre premier\n",a);

        }
        else {
            printf("%d n'est pas un nombre premier\n",a);

        }


    return 0;
}
