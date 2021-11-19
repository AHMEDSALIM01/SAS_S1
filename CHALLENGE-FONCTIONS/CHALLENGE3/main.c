#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int v,x,a,b;
 bool isPremier(){


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


}
int main()
{
    printf("donner un nombre a = ");
    scanf("%d",&a);
    isPremier();
    return 0;
}
